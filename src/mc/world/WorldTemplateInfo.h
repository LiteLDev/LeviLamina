#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
class PackAccessStrategy;
class WorldTemplatePackManifest;
struct WorldTemplateData;
namespace mce { class UUID; }
// clang-format on

struct WorldTemplateInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 1104> mUnk207bb5;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldTemplateInfo& operator=(WorldTemplateInfo const&);
    WorldTemplateInfo(WorldTemplateInfo const&);
    WorldTemplateInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit WorldTemplateInfo(::WorldTemplateData&& data);

    MCNAPI WorldTemplateInfo(::WorldTemplatePackManifest const& manifest, ::PackAccessStrategy const* accessStrategy);

#ifdef LL_PLAT_C
    MCNAPI ::std::string const& getAuthors() const;

    MCNAPI ::std::string const& getDescription() const;

    MCNAPI ::std::string const& getGameType() const;

    MCNAPI ::std::string getIdAsString() const;
#endif

    MCNAPI ::mce::UUID getKey() const;

    MCNAPI ::WorldTemplatePackManifest const& getPackManifest() const;

#ifdef LL_PLAT_C
    MCNAPI ::std::string const& getVersion() const;

    MCNAPI ::std::string const& getWorldIconAllowListPath() const;

    MCNAPI ::Core::PathBuffer<::std::string> const& getWorldIconPath() const;
#endif

    MCNAPI ::std::string const& getWorldName() const;

    MCNAPI ::Core::PathBuffer<::std::string> const& getWorldPath() const;

#ifdef LL_PLAT_C
    MCNAPI uint64 getWorldSize() const;

    MCNAPI bool isPremium() const;
#endif

    MCNAPI bool isVirtualCatalogItem() const;

#ifdef LL_PLAT_C
    MCNAPI bool isWorldIconOverridden() const;
#endif

    MCNAPI ~WorldTemplateInfo();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::WorldTemplateData
    buildTemplateData(::WorldTemplatePackManifest const& manifest, ::PackAccessStrategy const* accessStrategy);

    MCNAPI static ::WorldTemplateInfo const& getInvalid();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::WorldTemplateData&& data);

    MCNAPI void* $ctor(::WorldTemplatePackManifest const& manifest, ::PackAccessStrategy const* accessStrategy);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
