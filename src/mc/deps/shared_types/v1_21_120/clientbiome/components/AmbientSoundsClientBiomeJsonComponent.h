#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/util/Reference.h"
#include "mc/deps/shared_types/v1_21_40/clientbiome/components/IClientBiomeJsonComponent.h"
#include "mc/v1_21_40/clientbiome/components/ClientBiomeComponentVersion.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_120 {

struct AmbientSoundsClientBiomeJsonComponent : public ::SharedTypes::v1_21_40::IClientBiomeJsonComponent {
public:
    // AmbientSoundsClientBiomeJsonComponent inner types declare
    // clang-format off
    struct SoundAddition;
    // clang-format on

    // AmbientSoundsClientBiomeJsonComponent inner types define
    struct SoundAddition {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::SharedTypes::Reference<20>> mAsset;
        ::ll::TypedStorage<4, 4, float>                         mChance;
        // NOLINTEND

    public:
        // prevent constructor by default
        SoundAddition(SoundAddition const&);
        SoundAddition();

    public:
        // member functions
        // NOLINTBEGIN
        MCFOLD ::SharedTypes::v1_21_120::AmbientSoundsClientBiomeJsonComponent::SoundAddition&
        operator=(::SharedTypes::v1_21_120::AmbientSoundsClientBiomeJsonComponent::SoundAddition&&);

        MCFOLD ::SharedTypes::v1_21_120::AmbientSoundsClientBiomeJsonComponent::SoundAddition&
        operator=(::SharedTypes::v1_21_120::AmbientSoundsClientBiomeJsonComponent::SoundAddition const&);

        MCAPI ~SoundAddition();
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::SharedTypes::v1_21_120::AmbientSoundsClientBiomeJsonComponent::SoundAddition> mAddition;
    ::ll::TypedStorage<8, 32, ::SharedTypes::Reference<20>>                                                   mLoop;
    ::ll::TypedStorage<8, 32, ::SharedTypes::Reference<20>>                                                   mMood;
    ::ll::TypedStorage<8, 40, ::SharedTypes::v1_21_120::AmbientSoundsClientBiomeJsonComponent::SoundAddition>
                                                            mUnderwaterAddition;
    ::ll::TypedStorage<8, 32, ::SharedTypes::Reference<20>> mUnderwaterLoop;
    ::ll::TypedStorage<8, 32, ::SharedTypes::Reference<20>> mUnderwaterMood;
    // NOLINTEND

public:
    // prevent constructor by default
    AmbientSoundsClientBiomeJsonComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::ClientBiomeComponentVersion getType() const /*override*/;

    virtual ~AmbientSoundsClientBiomeJsonComponent() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI_C
    AmbientSoundsClientBiomeJsonComponent(::SharedTypes::v1_21_120::AmbientSoundsClientBiomeJsonComponent const&);

    MCAPI ::SharedTypes::v1_21_120::AmbientSoundsClientBiomeJsonComponent&
    operator=(::SharedTypes::v1_21_120::AmbientSoundsClientBiomeJsonComponent&&);

    MCAPI ::SharedTypes::v1_21_120::AmbientSoundsClientBiomeJsonComponent&
    operator=(::SharedTypes::v1_21_120::AmbientSoundsClientBiomeJsonComponent const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> SCHEMA_HELP();

    MCAPI static ::std::add_lvalue_reference_t<char const[]> SCHEMA_NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI_C void* $ctor(::SharedTypes::v1_21_120::AmbientSoundsClientBiomeJsonComponent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::ClientBiomeComponentVersion $getType() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_120
