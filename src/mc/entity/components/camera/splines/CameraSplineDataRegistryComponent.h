#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/puv/LoadResult.h"
#include "mc/deps/resource_processing/category/CategoryLoader.h"
#include "mc/deps/resource_processing/category/SharedSlicesTraits.h"
#include "mc/platform/threading/Mutex.h"

// auto generated forward declare list
// clang-format off
class IMinecraftEventing;
class ResourcePackManager;
namespace Core { class Path; }
namespace SharedTypes::v1_26_0 { struct CameraSplineDefinition; }
namespace SharedTypes::v1_26_0 { struct CameraSplineFile; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class CameraSplineDataRegistryComponent : public ::Bedrock::EnableNonOwnerReferences {
public:
    // CameraSplineDataRegistryComponent inner types define
    using SharedSliceLoader = ::Bedrock::Resources::CategoryLoader<::Bedrock::Resources::SharedSlicesTraits<5>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_26_0::CameraSplineDefinition>> mSplines;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>                                   mRegistriesLock;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&>                                          mEventing;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraSplineDataRegistryComponent& operator=(CameraSplineDataRegistryComponent const&);
    CameraSplineDataRegistryComponent(CameraSplineDataRegistryComponent const&);
    CameraSplineDataRegistryComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CameraSplineDataRegistryComponent() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Puv::LoadResult<::SharedTypes::v1_26_0::CameraSplineFile> _parseAndLoadSplines(
        ::std::string const&&                                                                    fileData,
        ::Core::Path const&                                                                      filenameWithExtension,
        ::Bedrock::Resources::CategoryLoader<::Bedrock::Resources::SharedSlicesTraits<5>> const& splineLoader
    );

    MCAPI void loadResources(::ResourcePackManager const& resourcePackManager, ::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
