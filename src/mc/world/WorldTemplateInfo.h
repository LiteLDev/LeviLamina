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

#ifdef LL_PLAT_C
    MCNAPI ::std::string const& getAuthors() const;

    MCNAPI ::std::string const& getDescription() const;

    MCNAPI ::std::string const& getGameType() const;

    MCNAPI ::std::string getIdAsString() const;

    MCNAPI ::std::string const& getVersion() const;

    MCNAPI ::std::string const& getWorldIconAllowListPath() const;

    MCNAPI ::std::string const& getWorldName() const;

    MCNAPI bool isPremium() const;

    MCNAPI bool isWorldIconOverridden() const;
#endif
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
