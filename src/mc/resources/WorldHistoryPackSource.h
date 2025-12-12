#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackOrigin.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/resources/PackSource.h"

// auto generated forward declare list
// clang-format off
class Pack;
class WorldPackHistory;
class WorldPacksHistoryFile;
struct PackSourceLoadOptions;
struct PackSourceLoadResult;
// clang-format on

class WorldHistoryPackSource : public ::PackSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkbc6895;
    ::ll::UntypedStorage<1, 1>  mUnk712674;
    ::ll::UntypedStorage<8, 24> mUnk4f8c50;
    ::ll::UntypedStorage<1, 1>  mUnkb16dc9;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldHistoryPackSource& operator=(WorldHistoryPackSource const&);
    WorldHistoryPackSource(WorldHistoryPackSource const&);
    WorldHistoryPackSource();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldHistoryPackSource() /*override*/ = default;

    virtual ::PackOrigin getPackOrigin() const /*override*/;

    virtual ::PackType getPackType() const /*override*/;

    virtual ::PackSourceLoadResult _loadImpl(::PackSourceLoadOptions&& options) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _addPackFromHistoryPack(
        ::std::vector<::gsl::not_null<::std::shared_ptr<::Pack>>>& packs,
        ::WorldPackHistory const&                                  worldPackHistory
    ) const;

    MCNAPI ::std::unique_ptr<::Pack> _createPackFromHistoryPack(::WorldPackHistory const& worldPackHistory) const;

    MCNAPI bool _readWorldHistoryFile(::WorldPacksHistoryFile& file) const;

    MCNAPI_C ::Bedrock::Threading::Async<void> saveHistoryFile();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::PackOrigin $getPackOrigin() const;

    MCNAPI ::PackType $getPackType() const;

    MCNAPI ::PackSourceLoadResult $_loadImpl(::PackSourceLoadOptions&& options);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
