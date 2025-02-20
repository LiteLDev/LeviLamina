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
    MCAPI ArmorTrim(::ArmorTrim const&);

    MCAPI ArmorTrim(::HashedString patternId, ::HashedString materialId);

    MCAPI void load(::CompoundTag const& tag);

    MCAPI ~ArmorTrim();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void appendUpgradeHoverText(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext
    );

    MCAPI static ::std::optional<::ArmorTrim> getTrim(::ItemStackBase const& instance);

    MCAPI static void setTrim(::ItemStackBase& instance, ::ArmorTrim trim);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& TAG_TRIM();

    MCAPI static ::std::string const& TAG_TRIM_MATERIAL();

    MCAPI static ::std::string const& TAG_TRIM_PATTERN();

    MCAPI static ::std::string const& UPGRADE_DESCRIPTION();

    MCAPI static ::std::string const& UPGRADE_DESCRIPTION_FORMAT();

    MCAPI static ::std::string const& WRONG_VERSION_OR_ITEM_ERROR();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::ArmorTrim const&);

    MCAPI void* $ctor(::HashedString patternId, ::HashedString materialId);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
