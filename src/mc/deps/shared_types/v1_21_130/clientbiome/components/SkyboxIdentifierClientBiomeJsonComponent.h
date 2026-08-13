#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/util/Reference.h"
#include "mc/deps/shared_types/v1_21_40/clientbiome/components/ClientBiomeComponentVersion.h"
#include "mc/deps/shared_types/v1_21_40/clientbiome/components/IClientBiomeJsonComponent.h"

namespace SharedTypes::v1_21_130 {

struct SkyboxIdentifierClientBiomeJsonComponent : public ::SharedTypes::v1_21_40::IClientBiomeJsonComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::SharedTypes::Reference<19>> mSkyboxIdentifier;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::ClientBiomeComponentVersion getType() const /*override*/;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCAPI static ::std::add_lvalue_reference_t<char const[29]> SCHEMA_NAME();
#endif

#ifdef LL_PLAT_C
    MCAPI static ::std::add_lvalue_reference_t<char const[]> SCHEMA_NAME();
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::ClientBiomeComponentVersion $getType() const;


    // NOLINTEND
};

} // namespace SharedTypes::v1_21_130
