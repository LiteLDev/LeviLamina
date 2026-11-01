# Config API

## Purpose

Config API provides typed JSON configuration for native mods. It can create
default config files, merge existing user values into new defaults, normalize
the JSON layout, and generate `config.schema.json` for the launcher editor.

## Header

```cpp
#include <pl/Config.hpp>
```

Config types should be simple aggregate structs with public fields, default
member initializers, and an integral `version` field.

## Define a Config

```cpp
#include <pl/Config.hpp>

#include <string>
#include <vector>

enum class Profile {
  Quiet,
  Balanced,
  Verbose,
};

struct HudConfig {
  bool showMessage = true;
  std::string message = "Hello from config";
  double scale = 1.25;
};

struct ModConfig {
  int version = 1;
  bool enabled = true;
  Profile profile = Profile::Balanced;
  HudConfig hud;
  std::vector<std::string> tags = {"overlay", "example"};
};
```

Field order in generated JSON follows the aggregate field order. Fields whose
names start with `$` are ignored by reflection.

## Load and Save

During native mod lifecycle calls, `ConfigFile` can use the current mod's
default `config/config.json` and `config/config.schema.json` paths. You may
still pass explicit paths when you need a non-default location.

```cpp
class MyMod {
public:
  bool load() {
    mConfig.emplace();
    if (!mConfig->load()) {
      getSelf().getLogger().warn("Failed to load config");
      return false;
    }
    return true;
  }

  bool enable() {
    return mConfig && mConfig->value().enabled;
  }

  [[nodiscard]] ll::mod::NativeMod &getSelf() const;

private:
  std::optional<pl::config::ConfigFile<ModConfig>> mConfig;
};
```

Save runtime changes through the same `ConfigFile` instance:

```cpp
mConfig->value().enabled = false;
mConfig->save();
```

## Update Behavior

`ConfigFile<T>::load()` starts from the C++ default value, then merges the
existing JSON into that default layout.

- Missing files are created automatically.
- New fields are added with C++ defaults.
- Existing user values are preserved when they can be deserialized.
- `version` is forced back to the C++ default `version`.
- Malformed or incomplete files are normalized and written back.
- Unknown keys are not kept after normalization.

## Schema Metadata

The schema generator infers `type`, `default`, nested `properties`, array
`items`, and enum choices. Add UI metadata with `pl::config::Schema<T>`.

```cpp
template <> struct pl::config::Schema<ModConfig> {
  static constexpr std::string_view title = "Example Config";
  static constexpr std::string_view description =
      "Settings for the example native mod.";

  static constexpr FieldSchema field(std::string_view name) {
    if (name == "version") {
      return {.title = "Version", .readOnly = true};
    }
    if (name == "enabled") {
      return {.title = "Enabled",
              .description = "Turns the mod behavior on or off."};
    }
    if (name == "profile") {
      return {.title = "Profile",
              .description = "Selects the runtime behavior preset."};
    }
    return {};
  }
};
```

Supported metadata:

| Field | Schema output | Purpose |
| --- | --- | --- |
| `title` | `title` | Human-readable field name. |
| `description` | `description` | Help text shown by the editor. |
| `minimum` | `minimum` | Lower numeric bound. |
| `maximum` | `maximum` | Upper numeric bound. |
| `readOnly` | `readOnly` | Generated or informational fields. |

## Supported Types

| C++ type | JSON representation |
| --- | --- |
| aggregate struct | object |
| `std::string` | string |
| `bool` | boolean |
| integral types | integer |
| floating point types | number |
| enum | string enum when `magic_enum` can name the value |
| `std::vector<T>` | array |
| `std::optional<T>` | value or `null` |

Prefer simple config structs. Avoid custom constructors, private fields, and
logic-heavy config objects.
