#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/resources/DirectoryPackSource.h"

// auto generated forward declare list
// clang-format off
class IContentKeyProvider;
class IPackManifestFactory;
class PackSourceReport;
struct WorldTemplatePackSourceOptions;
// clang-format on

class WorldTemplatePackSource : public ::DirectoryPackSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkc34428;
    ::ll::UntypedStorage<8, 16> mUnk866f94;
    ::ll::UntypedStorage<1, 1>  mUnkedfcff;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldTemplatePackSource& operator=(WorldTemplatePackSource const&);
    WorldTemplatePackSource(WorldTemplatePackSource const&);
    WorldTemplatePackSource();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WorldTemplatePackSource() /*override*/ = default;

    // vIndex: 5
    virtual ::PackSourceReport load(
        ::IPackManifestFactory&                                           manifestFactory,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit WorldTemplatePackSource(::WorldTemplatePackSourceOptions options);

    MCNAPI ::PackSourceReport _tryLoadFromZip(
        ::IPackManifestFactory&                                           manifestFactory,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider,
        ::Core::PathBuffer<::std::string> const&                          worldTemplatePath,
        ::std::string const&                                              subDir
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::WorldTemplatePackSourceOptions options);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::PackSourceReport $load(
        ::IPackManifestFactory&                                           manifestFactory,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
