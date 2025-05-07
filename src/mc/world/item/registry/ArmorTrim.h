#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class HashedString;
class ItemStackBase;
class Level;
namespace Bedrock::Safety { class RedactableString; }
// clang-format on

class ArmorTrim {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk9bfa43;
    ::ll::UntypedStorage<8, 48> mUnkb7fbf8;
    // NOLINTEND

public:
    // prevent constructor by default
    ArmorTrim& operator=(ArmorTrim const&);
    ArmorTrim();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ArmorTrim(::ArmorTrim const&);

    MCNAPI ArmorTrim(::HashedString patternId, ::HashedString materialId);

    MCNAPI void load(::CompoundTag const& tag);

    MCNAPI ~ArmorTrim();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void appendUpgradeHoverText(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext
    );

    MCNAPI static ::std::optional<::ArmorTrim> getTrim(::ItemStackBase const& instance);

    MCNAPI static void setTrim(::ItemStackBase& instance, ::ArmorTrim trim);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string const& TAG_TRIM();

    MCNAPI static ::std::string const& TAG_TRIM_MATERIAL();

    MCNAPI static ::std::string const& TAG_TRIM_PATTERN();

    MCNAPI static ::std::string const& UPGRADE_DESCRIPTION();

    MCNAPI static ::std::string const& UPGRADE_DESCRIPTION_FORMAT();

    MCNAPI static ::std::string const& WRONG_VERSION_OR_ITEM_ERROR();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ArmorTrim const&);

    MCNAPI void* $ctor(::HashedString patternId, ::HashedString materialId);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
