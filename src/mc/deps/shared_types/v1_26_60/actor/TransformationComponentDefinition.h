#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/deps/shared_types/util/Reference.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_60 {

struct TransformationComponentDefinition {
public:
    // TransformationComponentDefinition inner types declare
    // clang-format off
    struct AddComponents;
    struct TransformationDelay;
    // clang-format on

    // TransformationComponentDefinition inner types define
    struct AddComponents {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mComponentGroups;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCFOLD bool operator==(::SharedTypes::v1_26_60::TransformationComponentDefinition::AddComponents const&) const;
        // NOLINTEND
    };

    struct TransformationDelay {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float>                         mValue;
        ::ll::TypedStorage<4, 4, float>                         mRangeMin;
        ::ll::TypedStorage<4, 4, float>                         mRangeMax;
        ::ll::TypedStorage<4, 4, float>                         mBlockAssistChance;
        ::ll::TypedStorage<4, 4, int>                           mBlockRadius;
        ::ll::TypedStorage<4, 4, int>                           mBlockMax;
        ::ll::TypedStorage<4, 4, float>                         mBlockChance;
        ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mBlockTypes;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI bool
        operator==(::SharedTypes::v1_26_60::TransformationComponentDefinition::TransformationDelay const&) const;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::SharedTypes::Reference<1>>                           mInto;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::Legacy::LevelSoundEvent>> mBeginTransformSound;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::Legacy::LevelSoundEvent>> mTransformationSound;
    ::ll::TypedStorage<1, 1, bool>                                                   mDropEquipment;
    ::ll::TypedStorage<1, 1, bool>                                                   mDropInventory;
    ::ll::TypedStorage<1, 1, bool>                                                   mPreserveEquipment;
    ::ll::TypedStorage<1, 1, bool>                                                   mKeepOwner;
    ::ll::TypedStorage<1, 1, bool>                                                   mKeepLevel;
    ::ll::TypedStorage<8, 24, ::SharedTypes::v1_26_60::TransformationComponentDefinition::AddComponents>       mAdd;
    ::ll::TypedStorage<8, 56, ::SharedTypes::v1_26_60::TransformationComponentDefinition::TransformationDelay> mDelay;
    // NOLINTEND

public:
    // prevent constructor by default
    TransformationComponentDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TransformationComponentDefinition(::SharedTypes::v1_26_60::TransformationComponentDefinition const&);

    MCAPI ::SharedTypes::v1_26_60::TransformationComponentDefinition&
    operator=(::SharedTypes::v1_26_60::TransformationComponentDefinition&&);

    MCAPI ::SharedTypes::v1_26_60::TransformationComponentDefinition&
    operator=(::SharedTypes::v1_26_60::TransformationComponentDefinition const&);

    MCAPI bool operator==(::SharedTypes::v1_26_60::TransformationComponentDefinition const&) const;

    MCAPI ~TransformationComponentDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_26_60::TransformationComponentDefinition const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_60
