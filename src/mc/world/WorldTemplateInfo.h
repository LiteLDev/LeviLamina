#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class PackAccessStrategy;
class WorldTemplatePackManifest;
struct WorldTemplateData;
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
    WorldTemplateInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WorldTemplateInfo(::WorldTemplateInfo const&);

    MCNAPI_C ::std::string const& getAuthors() const;

    MCNAPI_C ::std::string const& getDescription() const;

    MCNAPI_C ::std::string const& getGameType() const;

    MCNAPI_C ::std::string getIdAsString() const;

    MCNAPI_C ::std::string const& getVersion() const;

    MCNAPI_C ::std::string const& getWorldIconAllowListPath() const;

    MCNAPI_C ::std::string const& getWorldName() const;

    MCNAPI_C bool isPremium() const;

    MCNAPI_C bool isWorldIconOverridden() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::WorldTemplateData
    buildTemplateData(::WorldTemplatePackManifest const& manifest, ::PackAccessStrategy const* accessStrategy);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::WorldTemplateInfo const&);
    // NOLINTEND
};
