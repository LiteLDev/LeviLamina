#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_40/clientbiome/components/IClientBiomeJsonComponent.h"
#include "mc/v1_21_40/clientbiome/components/ClientBiomeComponentVersion.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_40 { struct AmbientSoundsClientBiomeJsonComponent; }
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
        ::ll::UntypedStorage<8, 32> mUnk404473;
        ::ll::UntypedStorage<4, 4>  mUnk59a1c3;
        // NOLINTEND

    public:
        // prevent constructor by default
        SoundAddition& operator=(SoundAddition const&);
        SoundAddition(SoundAddition const&);
        SoundAddition();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::SharedTypes::v1_21_120::AmbientSoundsClientBiomeJsonComponent::SoundAddition&
        operator=(::SharedTypes::v1_21_120::AmbientSoundsClientBiomeJsonComponent::SoundAddition&&);

        MCNAPI ~SoundAddition();
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk7cb6c1;
    ::ll::UntypedStorage<8, 32> mUnkd6307c;
    ::ll::UntypedStorage<8, 32> mUnkf06ff7;
    ::ll::UntypedStorage<8, 40> mUnk3dadbf;
    ::ll::UntypedStorage<8, 32> mUnka7dcda;
    ::ll::UntypedStorage<8, 32> mUnk1f0563;
    // NOLINTEND

public:
    // prevent constructor by default
    AmbientSoundsClientBiomeJsonComponent& operator=(AmbientSoundsClientBiomeJsonComponent const&);
    AmbientSoundsClientBiomeJsonComponent(AmbientSoundsClientBiomeJsonComponent const&);
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
    MCNAPI_C AmbientSoundsClientBiomeJsonComponent(::SharedTypes::v1_21_120::AmbientSoundsClientBiomeJsonComponent&&);

    MCNAPI ::SharedTypes::v1_21_120::AmbientSoundsClientBiomeJsonComponent&
    operator=(::SharedTypes::v1_21_120::AmbientSoundsClientBiomeJsonComponent&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCNAPI_C static ::SharedTypes::v1_21_120::AmbientSoundsClientBiomeJsonComponent
    upgrade(::SharedTypes::v1_21_40::AmbientSoundsClientBiomeJsonComponent const& oldComponent);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[]> SCHEMA_HELP();

    MCNAPI static ::std::add_lvalue_reference_t<char const[]> SCHEMA_NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::SharedTypes::v1_21_120::AmbientSoundsClientBiomeJsonComponent&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ClientBiomeComponentVersion $getType() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_120
