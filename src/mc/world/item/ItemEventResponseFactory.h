#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/IPackLoadScoped.h"
#include "mc/util/EventResponseFactory.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
struct LegacyEventItemComponentData;
struct PackLoadInfo;
namespace SharedTypes::v1_26_30 { struct ItemDocument; }
// clang-format on

class ItemEventResponseFactory : public ::EventResponseFactory, public ::IPackLoadScoped {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ItemEventResponseFactory() /*override*/ = default;

    virtual void initializeFactory(::PackLoadInfo const& packLoadInfo) /*override*/;

    virtual void initSchema() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::optional<::LegacyEventItemComponentData> makeLegacyEvents(
        ::SemVersion const&                          documentVersion,
        ::SharedTypes::v1_26_30::ItemDocument const& itemDocument
    ) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $initializeFactory(::PackLoadInfo const& packLoadInfo);

    MCAPI void $initSchema();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEventResponseFactory();

    MCNAPI static void** $vftableForIPackLoadScoped();
    // NOLINTEND
};
