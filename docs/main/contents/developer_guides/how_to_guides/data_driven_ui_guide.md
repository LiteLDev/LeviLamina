# Data-driven UI Guide

This guide shows how to build reactive Minecraft Bedrock forms with `ll::ui`. For the complete declarations, defaults, lifecycle rules, and low-level APIs, see the [Data-driven UI API reference](../../api_reference/data_driven_ui.md).

LeviLamina's API follows the reactive concepts in Microsoft's [Introduction to the Data-Driven UI framework](https://learn.microsoft.com/en-us/minecraft/creator/documents/scripting/intro-to-ddui?view=minecraft-bedrock-stable), adapted to C++ callbacks, `Expected<T>`, and LeviLamina coroutines.

## Before you start

Use DDUI code on the server thread. The examples assume a valid `Player&` obtained from a server-thread event or command handler.

The main headers are:

```cpp
#include "ll/api/ui/form/CustomForm.h"
#include "ll/api/ui/form/MessageBox.h"
```

DDUI is separate from the legacy `ll::form` API:

| Legacy `ll::form` | DDUI `ll::ui` |
|-------------------|---------------|
| Static form payload | Reactive data bindings |
| Read input from an indexed response | Read input from typed Observables |
| Re-send to update content | Call `Observable::setData()` while open |
| Button selection returned when closed | Inline button callbacks can run while open |

## Build a complete CustomForm

Input controls require client-writable observables. Display-only state should remain read-only.

```cpp
#include <string>
#include <vector>

#include "ll/api/ui/form/CustomForm.h"

void showSettings(Player& player) {
    using namespace ll::ui;

    ObservableString status{"Ready"};
    ObservableString name{"Steve", {.clientWritable = true}};
    ObservableBoolean pvp{true, {.clientWritable = true}};
    ObservableNumber difficulty{1.0, {.clientWritable = true}};
    ObservableNumber volume{50.0, {.clientWritable = true}};

    auto const nameSubscription = name.subscribe(
        [status](std::string const& value) mutable {
            status.setData("Name: " + value);
        }
    );

    CustomForm form{player, UIRawMessage::translate("example.settings.title")};
    form.header("General")
        .label(status)
        .divider()
        .textField(
            "Player name",
            name,
            {.description = std::string{"Shown in this example"}}
        )
        .toggle(
            "Enable PvP",
            pvp,
            {.description = std::string{"Allow player combat"}}
        )
        .dropdown(
            "Difficulty",
            difficulty,
            {
                {"Peaceful", 0.0, std::string{"No hostile mobs"}},
                {"Easy", 1.0, std::string{"Reduced damage"}},
                {"Normal", 2.0, std::string{"Standard rules"}},
                {"Hard", 3.0, std::string{"Increased challenge"}},
            }
        )
        .slider(
            "Music volume",
            volume,
            0.0,
            100.0,
            {
                .description = std::string{"Percent"},
                .step = 5.0,
            }
        )
        .spacer()
        .button(
            "Reset",
            [name, pvp, difficulty, volume, status]() mutable {
                name.setData("Steve");
                pvp.setData(true);
                difficulty.setData(1.0);
                volume.setData(50.0);
                status.setData("Defaults restored");
            },
            {.tooltip = std::string{"Restore default values"}}
        )
        .closeButton();

    auto started = form.show(
        [name, pvp, difficulty, volume, nameSubscription](CustomForm::Result result) mutable {
            name.unsubscribe(nameSubscription);

            if (!result) {
                // The player left, the server stopped, or another runtime error occurred.
                return;
            }

            auto const closeReason = result.value();
            auto const finalName = name.getData();
            auto const finalPvp = pvp.getData();
            auto const finalDifficulty = difficulty.getData();
            auto const finalVolume = volume.getData();

            // Validate and persist the final values here.
            (void)closeReason;
            (void)finalName;
            (void)finalPvp;
            (void)finalDifficulty;
            (void)finalVolume;
        }
    );

    if (!started) {
        name.unsubscribe(nameSubscription);
        // Handle started.error().
    }
}
```

The form receives copies of the observables, but every copy shares state. The callback can therefore read the final values even though the local form wrapper has left scope.

The explicit `unsubscribe()` is for the application-created `name` subscription. Internal form bridges are disconnected automatically when the form completes.

## Update the UI from the server

Any observable used by text or an option can change while the form is open. A delayed update must still run on the server thread.

```cpp
#include <chrono>

#include "ll/api/thread/ServerThreadExecutor.h"
#include "ll/api/ui/form/CustomForm.h"

void showMonitor(Player& player) {
    using namespace std::chrono_literals;

    ll::ui::ObservableString status{"Collecting data..."};
    ll::ui::ObservableBoolean detailsVisible{true};

    ll::ui::CustomForm form{player, "Live monitor"};
    form.label(status, {.visible = detailsVisible})
        .button(
            "Hide details",
            [detailsVisible]() mutable {
                detailsVisible.setData(false);
            }
        )
        .closeButton();

    auto started = form.show();
    if (!started) {
        return;
    }

    ll::thread::ServerThreadExecutor::getDefault().executeAfter(
        [status]() mutable {
            status.setData("Server update received");
        },
        1s
    );
}
```

Do not rebuild or re-show the form to update it. `setData()` writes the new value through the existing binding. Setting the same value again is suppressed by `Observable<T>`.

## React to player input immediately

Subscribe to a client-writable observable when another UI value depends on it:

```cpp
ll::ui::ObservableNumber volume{50.0, {.clientWritable = true}};
ll::ui::ObservableString summary{"Volume: 50"};

auto const subscription = volume.subscribe(
    [summary](double const& value) mutable {
        summary.setData("Volume: " + std::to_string(value));
    }
);
```

Keep the subscription ID and remove it when your owning state finishes. Ignoring the ID intentionally leaves the callback active for the lifetime of the shared Observable state; the return value is not an RAII token.

## Dynamic component options

Option values can be observables. This allows one control to show, hide, enable, or disable another without changing the form structure.

```cpp
ll::ui::ObservableBoolean advanced{false, {.clientWritable = true}};
ll::ui::ObservableBoolean advancedVisible{false};
ll::ui::ObservableBoolean basicDisabled{false};

auto const subscription = advanced.subscribe(
    [advancedVisible, basicDisabled](bool const& enabled) mutable {
        advancedVisible.setData(enabled);
        basicDisabled.setData(enabled);
    }
);

ll::ui::CustomForm form{player, "Modes"};
form.toggle("Advanced mode", advanced)
    .label("Advanced controls", {.visible = advancedVisible})
    .button("Basic action", [] {}, {.disabled = basicDisabled})
    .closeButton();
```

The form structure is immutable after showing starts, but every bound value remains mutable.

## Use the coroutine path

`showAsync()` waits for the final close result. The task must be launched or awaited on the server thread.

```cpp
#include "ll/api/coro/CoroTask.h"
#include "ll/api/thread/ServerThreadExecutor.h"
#include "ll/api/ui/form/CustomForm.h"

ll::coro::CoroTask<> showSettingsAsync(Player& player) {
    ll::ui::ObservableBoolean enabled{false, {.clientWritable = true}};

    ll::ui::CustomForm form{player, "Async settings"};
    form.toggle("Enabled", enabled).closeButton();

    auto result = co_await form.showAsync();
    if (!result) {
        // Handle result.error().
        co_return;
    }

    auto const closeReason = result.value();
    auto const finalValue = enabled.getData();
    (void)closeReason;
    (void)finalValue;
}

void launchSettings(Player& player) {
    showSettingsAsync(player).launch(
        ll::thread::ServerThreadExecutor::getDefault()
    );
}
```

Do not call both `show()` and `showAsync()` on the same form. A form or session can be shown only once.

## Show a MessageBox

`MessageBox` is a two-button dialog. Unlike `CustomForm` action buttons, its result reports which button was selected.

```cpp
#include "ll/api/ui/form/MessageBox.h"

void confirmReset(Player& player) {
    ll::ui::MessageBox box{
        player,
        ll::ui::UIRawMessage::translate("example.reset.title")
    };

    box.body("Reset all saved settings?")
        .button1(
            ll::ui::UIRawMessage::translate("gui.yes"),
            std::string{"This cannot be undone"}
        )
        .button2(ll::ui::UIRawMessage::translate("gui.no"));

    auto started = box.show([](ll::ui::MessageBox::Result result) {
        if (!result || !result->selection) {
            return;
        }

        if (*result->selection == 1) {
            // button1 selected: perform reset.
        } else if (*result->selection == 2) {
            // button2 selected: leave data unchanged.
        }
    });

    if (!started) {
        // Handle started.error().
    }
}
```

Button numbers are one-based: `button1` produces `1`, and `button2` produces `2`. A busy player, programmatic close, or other close without a selection leaves `selection` empty.

## Close forms

Use the narrowest close operation that matches the intent:

```cpp
auto targeted = form.close(); // Close this CustomForm only.

ll::ui::closeScreen(player);  // Close every DDUI screen for this player.
```

`form.close()` returns `Expected<>` and requires the form to be showing. `closeScreen(player)` returns `void`; each active session receives its own `ProgrammaticCloseAll` completion later.

## Open a custom resource-pack screen

Only use `ScreenSession` when the resource pack defines the screen and its data contract. Prefer `cereal::DynamicValue` over the compatibility JSON overload.

```cpp
#include "ll/api/ui/base/ScreenSession.h"

#include "mc/deps/cereal/schema/dynamic/DynamicValue.h"

void showCustomScreen(Player& player) {
    auto data = cereal::DynamicValue::object({
        {"title", "Runtime status"},
        {"count", 0.0},
    });

    ll::ui::ScreenSession session{player, "example:runtime_status"};
    auto property = session.createProperty("example", "runtime_status", data);
    if (!property) {
        return;
    }

    auto count = property->bind<double>("count");
    if (!count) {
        return;
    }

    auto shown = session.show();
    if (!shown) {
        return;
    }

    count->set(1.0);
}
```

The `ScreenSession` must remain alive for its `Property` and `Binding<T>` handles to work. A production custom-screen owner should retain the session until its completion callback runs.

## Common mistakes

| Symptom | Cause and correction |
|---------|----------------------|
| Input control construction throws | Its value Observable is read-only; construct it with `{.clientWritable = true}` |
| `show()` succeeds but no close result is available | `show()` reports startup only; provide a callback or use `showAsync()` |
| A subscription stops immediately | This applies to `Binding::listen()` when its RAII `Subscription` was discarded; retain it |
| An Observable callback never stops | Observable IDs are explicit; call `unsubscribe(id)` |
| Structural method throws after an attempted show | Structure locks on the first show attempt; create a new form |
| UI does not update after changing a plain variable | Bind an Observable and call its `setData()` |
| `close()` reports that the form is not showing | Call it only after successful startup and before completion |
| NaN or infinity is rejected | DDUI numeric values must be finite |
| Another player's menu should remain open | Use the form's `close()`, not `closeScreen(player)` on that player |

## Further reading

- [Data-driven UI API reference](../../api_reference/data_driven_ui.md)
- [Data API: `Observable<T>`](../../api_reference/data.md#observable)
- [Expected error handling](../../api_reference/expected.md)
- [Coroutine API](../../api_reference/coro.md)
- [Microsoft DDUI introduction](https://learn.microsoft.com/en-us/minecraft/creator/documents/scripting/intro-to-ddui?view=minecraft-bedrock-stable)
- [Microsoft `@minecraft/server-ui` 2.1.0 reference](https://learn.microsoft.com/en-us/minecraft/creator/scriptapi/minecraft/server-ui/minecraft-server-ui?view=minecraft-bedrock-stable)
