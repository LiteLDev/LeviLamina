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

namespace SharedTypes::v1_21_40 {

struct AmbientSoundsClientBiomeJsonComponent : public ::SharedTypes::v1_21_40::IClientBiomeJsonComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::SharedTypes::Reference<20>> mAddition;
    ::ll::TypedStorage<8, 32, ::SharedTypes::Reference<20>> mLoop;
    ::ll::TypedStorage<8, 32, ::SharedTypes::Reference<20>> mMood;
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

    virtual ~AmbientSoundsClientBiomeJsonComponent() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SharedTypes::v1_21_40::AmbientSoundsClientBiomeJsonComponent&
    operator=(::SharedTypes::v1_21_40::AmbientSoundsClientBiomeJsonComponent&&);
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

} // namespace SharedTypes::v1_21_40
