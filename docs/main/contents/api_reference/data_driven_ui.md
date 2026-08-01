# Data-driven UI

`ll/api/ui/` · **Common**

## Overview

The `ll::ui` module is LeviLamina's typed C++ interface to Minecraft Bedrock's data-driven UI (DDUI) framework. DDUI keeps form data in a synchronized data store, so text, visibility, disabled states, ranges, and input values can change while a screen remains open.

The high-level API provides `CustomForm` and `MessageBox` without exposing a layout document or property path. `ScreenSession`, `Property`, and `Binding<T>` remain available for custom resource-pack screens that need direct access to the underlying DDUI data store.

This API follows the stable feature set introduced by [`@minecraft/server-ui` 2.1.0](https://learn.microsoft.com/en-us/minecraft/creator/scriptapi/minecraft/server-ui/changelog?view=minecraft-bedrock-stable). Microsoft describes the reactive model in [Introduction to the Data-Driven UI framework](https://learn.microsoft.com/en-us/minecraft/creator/documents/scripting/intro-to-ddui?view=minecraft-bedrock-stable). The exact compatibility baseline is Mojang's [`@minecraft/server-ui` 2.1.0 binding metadata](https://github.com/Mojang/bedrock-samples/blob/main/metadata/script_modules/%40minecraft/server-ui-bindings_2.1.0.json).

!!! note "Stable scope"

    Later preview additions are not implied by this API. In particular, `CustomForm::image()` and related image options are not part of the current C++ surface, even if a Microsoft Learn stable-view page displays them with a pre-release warning.

## Headers

| Header | Purpose |
|--------|---------|
| `ll/api/ui/base/UIRawMessage.h` | Literal, translated, substituted, and composite UI text |
| `ll/api/ui/base/Observable.h` | UI-specific observable types and value variants |
| `ll/api/ui/form/CustomForm.h` | Typed reactive custom form and all component options |
| `ll/api/ui/form/MessageBox.h` | Two-button message dialog |
| `ll/api/ui/base/ScreenSession.h` | DDUI screen lifecycle and global close operation |
| `ll/api/ui/base/DataStore.h` | Low-level property, binding, and subscription handles |
| `ll/api/data/Observable.h` | General-purpose observable template; documented under [Data](data.md#observable) |

## Which layer to use

| Need | API |
|------|-----|
| Build a reactive menu or input form | `CustomForm` |
| Ask a two-button question | `MessageBox` |
| Update form values while it is open | UI observables |
| Supply translated or composite text | `UIRawMessage` |
| Open a custom DDUI screen from a resource pack | `ScreenSession` |
| Bind custom screen data paths | `Property` and `Binding<T>` |

Prefer the high-level form classes for the vanilla custom-form and message-box presets. They materialize the native data structure, bind observables, validate client writes, and release owned data-store state when the form completes.

## Thread and lifetime rules

Form, session, property, binding, and subscription operations must run on the server thread. This includes destroying the final handle that owns a live session. A task returned by `showAsync()` must therefore be awaited or launched on the server thread.

The UI observable classes are copied into forms by value, but their `ll::data::Observable<T>` base shares state between copies. Keeping an external copy is the intended way to read or update a form value. While an observable is bound to a visible form, call `setData()` on the server thread because the update writes to the player's DDUI data store.

`CustomForm` and `MessageBox` are move-only. After a successful `show()`, the internal runtime keeps itself alive until Bedrock completes the screen, so the wrapper does not have to remain in the calling stack frame. Retain the wrapper if later code needs to call its targeted `close()` method.

## Text values

Most text parameters accept `TextValue`:

```cpp
using TextValue = std::variant<
    std::string,
    UIRawMessage,
    ObservableString,
    ObservableUIRawMessage
>;
```

A `std::string` or `UIRawMessage` is static. `ObservableString` and `ObservableUIRawMessage` update the client whenever their value changes.

### UIRawMessage

`UIRawMessage` is a typed representation of the stable `text`, `translate`, `with`, and `rawtext` fields described by Microsoft's [UIRawMessage reference](https://learn.microsoft.com/en-us/minecraft/creator/scriptapi/minecraft/server-ui/uirawmessage?view=minecraft-bedrock-stable).

```cpp
class UIRawMessage {
public:
    static UIRawMessage text(std::string value);
    static UIRawMessage translate(std::string key);
    static UIRawMessage translate(
        std::string key,
        std::vector<std::string> substitutions
    );
    static UIRawMessage translate(
        std::string key,
        UIRawMessage substitutions
    );
    static UIRawMessage rawText(std::vector<UIRawMessage> messages);

    bool operator==(UIRawMessage const&) const noexcept;
};
```

```cpp
using ll::ui::UIRawMessage;

auto literal = UIRawMessage::text("Server online");
auto translated = UIRawMessage::translate("gui.ok");
auto substituted = UIRawMessage::translate(
    "example.player_count",
    std::vector<std::string>{"5", "20"}
);
auto combined = UIRawMessage::rawText({
    UIRawMessage::text("Status: "),
    UIRawMessage::translate("gui.yes")
});
```

Translation happens on the client using the player's language. The high-level API does not accept or expose JSON for text values.

## UI observables

The four UI observable types derive from the general [`ll::data::Observable<T>`](data.md#observable) template and add one immutable UI option:

```cpp
struct ObservableOptions {
    bool clientWritable{false};
};

template <class T>
class UIObservable : public data::Observable<T> {
public:
    explicit UIObservable(T initial, ObservableOptions options = {});
    bool isClientWritable() const noexcept;
};

class ObservableBoolean      : public UIObservable<bool> {};
class ObservableNumber       : public UIObservable<double> {};
class ObservableString       : public UIObservable<std::string> {};
class ObservableUIRawMessage : public UIObservable<UIRawMessage> {};
```

These correspond to Microsoft's stable [ObservableBoolean](https://learn.microsoft.com/en-us/minecraft/creator/scriptapi/minecraft/server-ui/observableboolean?view=minecraft-bedrock-stable), [ObservableNumber](https://learn.microsoft.com/en-us/minecraft/creator/scriptapi/minecraft/server-ui/observablenumber?view=minecraft-bedrock-stable), [ObservableString](https://learn.microsoft.com/en-us/minecraft/creator/scriptapi/minecraft/server-ui/observablestring?view=minecraft-bedrock-stable), and [ObservableUIRawMessage](https://learn.microsoft.com/en-us/minecraft/creator/scriptapi/minecraft/server-ui/observableuirawmessage?view=minecraft-bedrock-stable) types.

`clientWritable` controls the direction of the bridge:

| Value | Data flow |
|-------|-----------|
| `false` (default) | Server Observable to UI only |
| `true` | Server Observable to UI, and validated client changes back to the Observable |

The value observable passed to `dropdown()`, `slider()`, `textField()`, or `toggle()` must be client-writable. Passing a read-only observable to one of these input controls throws `std::invalid_argument` while the form is being built.

Use read-only observables for labels, descriptions, visibility, disabled states, slider bounds, and other values controlled exclusively by the server. Granting client write access to such values unnecessarily expands the data the client is allowed to submit.

```cpp
ll::ui::ObservableString status{"Waiting"};
ll::ui::ObservableString name{"Steve", {.clientWritable = true}};

auto const id = name.subscribe([status](std::string const& value) mutable {
    status.setData("Name: " + value);
});
```

Calling `setData()` on either a read-only or client-writable observable updates every bound UI location. Client-originated writes are accepted only for paths explicitly marked writable, with type, finite-number, and replay validation performed by the low-level binding layer.

## CustomForm

Microsoft's corresponding type is documented as [CustomForm](https://learn.microsoft.com/en-us/minecraft/creator/scriptapi/minecraft/server-ui/customform?view=minecraft-bedrock-stable).

```cpp
class CustomForm {
public:
    using Result         = Expected<ScreenCloseReason>;
    using Callback       = brstd::move_only_function<void(Result)>;
    using ButtonCallback = brstd::move_only_function<void()>;

    CustomForm(Player& player, TextValue title);

    CustomForm& button(TextValue, ButtonCallback, ButtonOptions = {});
    CustomForm& closeButton();
    CustomForm& divider(DividerOptions = {});
    CustomForm& dropdown(
        TextValue,
        ObservableNumber,
        std::vector<DropdownItemData>,
        DropdownOptions = {}
    );
    CustomForm& header(TextValue, TextOptions = {});
    CustomForm& label(TextValue, TextOptions = {});
    CustomForm& slider(
        TextValue,
        ObservableNumber,
        NumberValue min,
        NumberValue max,
        SliderOptions = {}
    );
    CustomForm& spacer(SpacingOptions = {});
    CustomForm& textField(TextValue, ObservableString, TextFieldOptions = {});
    CustomForm& toggle(TextValue, ObservableBoolean, ToggleOptions = {});

    Expected<> show(Callback callback = {});
    coro::CoroTask<Result> showAsync();

    Expected<> close();
    bool isShowing() const noexcept;
};
```

All component methods return `*this`, so construction supports chaining. The component order is the call order.

### Components

| Method | Purpose | Required reactive value |
|--------|---------|-------------------------|
| `button(label, callback, options)` | Adds an action button | None; callback can run repeatedly while the form stays open |
| `closeButton()` | Enables the preset close button and corner close control | None; the label uses the client translation key `gui.close` |
| `divider(options)` | Adds a horizontal separator | None |
| `dropdown(label, value, items, options)` | Adds a numeric-valued selection list | Client-writable `ObservableNumber` |
| `header(text, options)` | Adds emphasized section text | None |
| `label(text, options)` | Adds normal read-only text | None |
| `slider(label, value, min, max, options)` | Adds a numeric slider | Client-writable `ObservableNumber` |
| `spacer(options)` | Adds vertical spacing | None |
| `textField(label, text, options)` | Adds a text input | Client-writable `ObservableString` |
| `toggle(label, toggled, options)` | Adds an on/off input | Client-writable `ObservableBoolean` |

`NumberValue` is `double` or `ObservableNumber`. It is used for slider bounds and step values, allowing the server to change them while the form is open. All numbers written through the high-level form and binding layers must be finite.

Each `DropdownItemData` has a `label`, numeric `value`, and optional `description`. The dropdown's observable is bound to the control's numeric value; use values that match the item values expected by the resource-pack control.

### Options

Every option member is optional. Omitted values use the defaults shown below. A `TextValue`, `BooleanValue`, or `NumberValue` member can itself be observable, making that option reactive.

```cpp
using BooleanValue = std::variant<bool, ObservableBoolean>;
using NumberValue  = std::variant<double, ObservableNumber>;
```

| Type | Members | Defaults |
|------|---------|----------|
| `ButtonOptions` | `disabled`, `tooltip`, `visible` | `false`, empty, `true` |
| `DividerOptions` | `visible` | `true` |
| `DropdownOptions` | `description`, `disabled`, `visible` | empty, `false`, `true` |
| `SliderOptions` | `description`, `disabled`, `step`, `visible` | empty, `false`, `1.0`, `true` |
| `SpacingOptions` | `visible` | `true` |
| `TextFieldOptions` | `description`, `disabled`, `visible` | empty, `false`, `true` |
| `TextOptions` | `visible` | `true` |
| `ToggleOptions` | `description`, `disabled`, `visible` | empty, `false`, `true` |

```cpp
struct DropdownItemData {
    TextValue                label;
    double                   value;
    std::optional<TextValue> description;
};
```

### Show and close behavior

`show(callback)` is the direct callback path. Its `Expected<>` reports whether the form was prepared and successfully handed to Bedrock. It does not contain the eventual close reason. The callback receives the final `Expected<ScreenCloseReason>`.

`showAsync()` returns a coroutine task whose value is the same final result. No callback-style `show()` overload starts a coroutine internally.

A form can be shown only once. Calling any structural method after the first `show()` or `showAsync()` call throws `std::logic_error`, even if preparation or startup later fails. Calling `show()` again returns an error.

`close()` targets this form. It returns an error if the form has not reached the showing state. Once a close has been requested or the form is already closed, another `close()` succeeds without sending another request. `isShowing()` remains true while a close request is waiting for Bedrock's completion notification.

When the form completes, all internal Observable bridges, client-write permissions, native subscriptions, and the owned data-store property are released.

## MessageBox

Microsoft's corresponding type is documented as [MessageBox](https://learn.microsoft.com/en-us/minecraft/creator/scriptapi/minecraft/server-ui/messagebox?view=minecraft-bedrock-stable), with its result described by [MessageBoxResult](https://learn.microsoft.com/en-us/minecraft/creator/scriptapi/minecraft/server-ui/messageboxresult?view=minecraft-bedrock-stable).

```cpp
struct MessageBoxResult {
    ScreenCloseReason             closeReason;
    std::optional<std::uint32_t> selection;
};

class MessageBox {
public:
    using Result   = Expected<MessageBoxResult>;
    using Callback = brstd::move_only_function<void(Result)>;

    MessageBox(Player& player, TextValue title);

    MessageBox& body(TextValue);
    MessageBox& button1(TextValue, std::optional<TextValue> tooltip = {});
    MessageBox& button2(TextValue, std::optional<TextValue> tooltip = {});

    Expected<> show(Callback callback = {});
    coro::CoroTask<Result> showAsync();

    Expected<> close();
    bool isShowing() const noexcept;
};
```

`body()`, both labels, and both tooltips may be static or observable. Set both button labels before showing the box.

`selection` follows Bedrock's stable DDUI convention:

| Value | Meaning |
|-------|---------|
| `1` | The player selected `button1` |
| `2` | The player selected `button2` |
| empty | The box closed without a button selection |

The callback, coroutine, single-show, structural-lock, `close()`, and cleanup rules are the same as for `CustomForm`.

## Screen results

`ScreenCloseReason` is an alias of Bedrock's existing `DataDrivenScreenClosedReason`; LeviLamina does not define a second close-reason enum.

| Enumerator | Value | Meaning |
|------------|-------|---------|
| `ProgrammaticClose` | `0` | The specific form was closed through `close()` |
| `ProgrammaticCloseAll` | `1` | DDUI screens were closed through `closeScreen(player)` |
| `ClientCanceled` | `2` | The client canceled or dismissed the screen |
| `UserBusy` | `3` | The player was busy with another UI |
| `InvalidForm` | `4` | Bedrock rejected the screen data or layout |

Player departure and server shutdown complete the C++ result with an `ll::Error`, rather than manufacturing another close reason.

## Closing every DDUI screen

```cpp
#include "ll/api/ui/base/ScreenSession.h"

ll::ui::closeScreen(player);
```

`closeScreen(Player&)` asks the client to close all DDUI screens for that player. It is the C++ counterpart of the stable Script API manager's close-all operation. It returns `void` because it sends a global close request and has no individual session result to report. Active sessions complete separately with `ScreenCloseReason::ProgrammaticCloseAll`.

Use `CustomForm::close()`, `MessageBox::close()`, or `ScreenSession::close()` when only one known screen should close.

## Low-level ScreenSession

`ScreenSession` is intended for a custom DDUI screen supplied by a resource pack. The high-level forms already manage their own session and data property, so normal form code does not need this class.

```cpp
enum class ScreenSessionState : std::uint8_t {
    Ready,
    Showing,
    Closed,
};

class ScreenSession {
public:
    using Result   = Expected<ScreenCloseReason>;
    using Callback = brstd::move_only_function<void(Result)>;

    ScreenSession(Player&, std::string screenId);
    ScreenSession(Player&, std::string screenId, uint instanceId);
    ScreenSession(Player&, std::string screenId, NoInstanceIdTag);

    ScreenSessionState getState() const noexcept;
    std::optional<uint> getInstanceId() const noexcept;
    std::optional<uint> getFormId() const noexcept;

    Expected<Property> createProperty(
        std::string datastore,
        std::string property,
        cereal::DynamicValue const& value
    ) const;
    Expected<Property> createProperty(
        std::string datastore,
        std::string property,
        std::string const& json
    ) const;
    Expected<Property> borrowProperty(
        std::string datastore,
        std::string property
    ) const;

    Expected<> show(Callback callback = {}) const;
    coro::CoroTask<Result> showAsync() const;
    Expected<> close() const;
};
```

The default two-argument constructor generates an instance ID. Supply an explicit ID when a custom screen contract requires one, or `NoInstanceId` when it requires no instance ID. The Bedrock form ID is assigned only after showing begins.

`createProperty()` creates or replaces session-owned data. Owned data is cleared when the session closes. `borrowProperty()` attaches a non-owning handle to an existing player data-store property and does not clear that property during session cleanup.

Prefer the `cereal::DynamicValue` overload for structured C++ construction. The string overload exists for low-level compatibility; high-level form APIs neither use nor expose JSON.

```cpp
auto data = cereal::DynamicValue::object({
    {"title", "Status"},
    {"visible", true},
    {"count", 0.0},
});

ll::ui::ScreenSession session{player, "example:status_screen"};
auto property = session.createProperty("example", "status", data);
if (!property) {
    // Handle property.error().
    return;
}
```

Like a high-level form, a session can be shown only once. Copies of `ScreenSession` share one implementation and one lifecycle.

## Property and Binding

```cpp
using BindingValueTypes = meta::TypeList<
    double,
    bool,
    std::string,
    cereal::DynamicValue
>;

class Property {
public:
    Expected<> set(cereal::DynamicValue const& value) const;
    Expected<> setJson(std::string const& json) const;
    Expected<> erase() const;

    template <BindingValue T>
    Expected<Binding<T>> bind(std::string path) const;

    template <BindingValue T>
    Expected<Binding<T>> bindClientWritable(std::string path) const;

    explicit operator bool() const noexcept;
};

template <BindingValue T>
class Binding {
public:
    using Callback = brstd::move_only_function<void(T const&)>;

    Expected<T> get() const;
    Expected<> set(T value) const;
    Expected<Subscription> listen(Callback callback) const;

    Expected<> setClientWritable(bool writable) const;
    bool isClientWritable() const noexcept;

    explicit operator bool() const noexcept;
};

class Subscription {
public:
    Subscription() noexcept;
    ~Subscription();

    Subscription(Subscription const&) = delete;
    Subscription& operator=(Subscription const&) = delete;
    Subscription(Subscription&&) noexcept;
    Subscription& operator=(Subscription&&) noexcept;

    void reset() noexcept;
    explicit operator bool() const noexcept;
};
```

A binding path uses Bedrock DDUI path syntax and is interpreted relative to its property. Binding the same path with a different C++ type returns an error. Number bindings and every number nested in a `DynamicValue` reject NaN and infinity.

`bindClientWritable<T>()` is shorthand for `bind<T>()` followed by `setClientWritable(true)`. Only grant this permission to paths the client must edit. Incoming updates are checked against the binding type and version; invalid or replayed writes do not reach listeners, and the last valid value is restored when possible.

`listen()` returns a move-only RAII `Subscription`. Keep it alive for as long as notifications are needed. Destroying it or calling `reset()` cancels that listener. This differs deliberately from `ll::data::Observable<T>::SubscriptionId`, whose lifetime has no cancellation effect.

```cpp
auto binding = property->bindClientWritable<double>("count");
if (!binding) {
    return;
}

auto subscription = binding->listen([](double const& value) {
    // Handle a validated server or client data-store update.
});
if (!subscription) {
    return;
}

auto write = binding->set(42.0);
```

`Property` and `Binding<T>` are non-owning handles. They become unavailable when their `ScreenSession` expires. `Subscription` also becomes inactive when its session closes.

## Error model

Operations that interact with Bedrock return `Expected<T>` or `Expected<>`. Check the result before using its value; errors include invalid handles, expired players, wrong binding types, invalid paths, unavailable DDUI services, invalid lifecycle transitions, and rejected screen data.

Form construction has two programmer-error exceptions:

| Condition | Exception |
|-----------|-----------|
| Modifying a `CustomForm` or `MessageBox` after showing has started | `std::logic_error` |
| Passing a read-only Observable to an input control, or a non-finite high-level number | `std::invalid_argument` |

Generic Observable callback exceptions propagate as documented under [Data](data.md#observable). DDUI completion callbacks and low-level binding listeners are engine callback boundaries: exceptions escaping them are caught and logged by LeviLamina.

## Differences from the Script API

The C++ API preserves the stable DDUI behavior but is not a source-level translation of TypeScript:

| Microsoft Script API | LeviLamina C++ API |
|----------------------|--------------------|
| Promise returned by `show()` | Direct `show(callback)` plus `showAsync()` |
| Script exceptions | `Expected<T>` for runtime failures; standard exceptions for invalid construction/modification |
| Observable callback used as unsubscribe token | Per-state `std::uint32_t` subscription ID |
| `uiManager.closeAllForms(player)` | `ll::ui::closeScreen(player)` |
| Raw message object literals | Typed `UIRawMessage` factories |
| Form layout objects managed by the script runtime | Typed components; no public layout or JSON |
| `ObservableString::getFilteredText()` | Not exposed by the current C++ public API |
| Preview form components such as `image()` | Not implemented |

## Related

- [Data-driven UI guide](../developer_guides/how_to_guides/data_driven_ui_guide.md) - complete callback, coroutine, dynamic-state, and message-box examples
- [Data](data.md#observable) - full `ll::data::Observable<T>` semantics
- [Expected](expected.md) - handling `Expected<T>` and `ll::Error`
- [Coroutine](coro.md) - launching and awaiting `CoroTask<T>`
- [Legacy Form API](form.md) - static `ll::form` forms, separate from DDUI

## Official references

- [Microsoft: Introduction to the Data-Driven UI framework](https://learn.microsoft.com/en-us/minecraft/creator/documents/scripting/intro-to-ddui?view=minecraft-bedrock-stable)
- [Microsoft: `@minecraft/server-ui` module](https://learn.microsoft.com/en-us/minecraft/creator/scriptapi/minecraft/server-ui/minecraft-server-ui?view=minecraft-bedrock-stable)
- [Microsoft: `CustomForm`](https://learn.microsoft.com/en-us/minecraft/creator/scriptapi/minecraft/server-ui/customform?view=minecraft-bedrock-stable)
- [Microsoft: `MessageBox`](https://learn.microsoft.com/en-us/minecraft/creator/scriptapi/minecraft/server-ui/messagebox?view=minecraft-bedrock-stable)
- [Microsoft: `UIRawMessage`](https://learn.microsoft.com/en-us/minecraft/creator/scriptapi/minecraft/server-ui/uirawmessage?view=minecraft-bedrock-stable)
- [Mojang: `@minecraft/server-ui` 2.1.0 binding metadata](https://github.com/Mojang/bedrock-samples/blob/main/metadata/script_modules/%40minecraft/server-ui-bindings_2.1.0.json)
