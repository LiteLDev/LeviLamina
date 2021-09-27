#pragma once

enum class CommandFlagValue : char {
    None        = 0,
    Usage       = 1,
    Visibility2 = 2,
    Visibility4 = 4,
    Visibility6 = 6,
    Sync        = 8,
    Execute     = 16,
    Type        = 32,
    Cheat       = 64,
};

struct CommandFlag {
    CommandFlagValue value;

    constexpr bool operator==(CommandFlag const& rhs) const noexcept {
        return value == rhs.value;
    }
    constexpr bool operator!=(CommandFlag const& rhs) const noexcept {
        return value != rhs.value;
    }
    CommandFlag& operator|=(CommandFlag const& rhs) {
        value = (CommandFlagValue)((char)rhs.value | (char)value);
        return *this;
    }
};
constexpr inline CommandFlag CommandFlagNone        = {CommandFlagValue::None};
constexpr inline CommandFlag CommandFlagUsage       = {CommandFlagValue::Usage};
constexpr inline CommandFlag CommandFlagVisibility2 = {CommandFlagValue::Visibility2};
constexpr inline CommandFlag CommandFlagVisibility4 = {CommandFlagValue::Visibility4};
constexpr inline CommandFlag CommandFlagVisibility6 = {CommandFlagValue::Visibility6};
constexpr inline CommandFlag CommandFlagSync        = {CommandFlagValue::Sync};
constexpr inline CommandFlag CommandFlagExecute     = {CommandFlagValue::Execute};
constexpr inline CommandFlag CommandFlagType        = {CommandFlagValue::Type};
constexpr inline CommandFlag CommandFlagCheat       = {CommandFlagValue::Cheat};
