#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class PlayerListEntry;
struct AutoCompleteInformation;
namespace mce { class UUID; }
// clang-format on

struct CommandRegistryArguments {
public:
    // CommandRegistryArguments inner types define
    using AutoCompletePlayerList = ::std::string (*)(
        ::std::string const&,
        ::std::unordered_map<::mce::UUID, ::PlayerListEntry> const&,
        ::AutoCompleteInformation&
    );

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mIsEduMode;
    ::ll::TypedStorage<
        8,
        8,
        ::std::string (*)(
            ::std::string const&,
            ::std::unordered_map<::mce::UUID, ::PlayerListEntry> const&,
            ::AutoCompleteInformation&
        )>
        mAutoCompletePlayerMention;
    // NOLINTEND
};
