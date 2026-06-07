#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/PackOrigin.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/resources/PackSource.h"

// auto generated forward declare list
// clang-format off
class Pack;
class WorldPackHistory;
class WorldPacksHistoryFile;
struct PackIdVersion;
struct PackSourceLoadOptions;
struct PackSourceLoadResult;
struct WorldHistoryPackSourceOptions;
namespace Core { class Path; }
namespace mce { class UUID; }
// clang-format on

class WorldHistoryPackSource : public ::PackSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk521049;
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
    virtual ~WorldHistoryPackSource() /*override*/;

    virtual ::PackOrigin getPackOrigin() const /*override*/;

    virtual ::PackType getPackType() const /*override*/;

    virtual ::PackSourceLoadResult _loadImpl(::PackSourceLoadOptions&& options) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit WorldHistoryPackSource(::WorldHistoryPackSourceOptions options);

    MCNAPI void _addPackFromHistoryPack(
        ::std::vector<::gsl::not_null<::std::shared_ptr<::Pack>>>& packs,
        ::WorldPackHistory const&                                  worldPackHistory
    ) const;

    MCNAPI ::std::unique_ptr<::Pack> _createPackFromHistoryPack(::WorldPackHistory const& worldPackHistory) const;

    MCNAPI bool _readWorldHistoryFile(::WorldPacksHistoryFile& file) const;

    MCNAPI ::Core::PathBuffer<::std::string> const& getPathToWorld() const;

#ifdef LL_PLAT_C
    MCNAPI ::Bedrock::Threading::Async<void> saveHistoryFile();

    MCNAPI void setSourceUUIDForPackHistory(::PackIdVersion const& packId, ::mce::UUID const& sourceUuid);

    MCNAPI ::Bedrock::Threading::Async<void>
    trackNewPacksIfNotTracked(::std::vector<::WorldPackHistory>&& worldPackHistory);
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Core::PathBuffer<::std::string>
    generateHistoryFilePath(::Core::Path const& pathToWorld, ::PackType type);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::WorldHistoryPackSourceOptions options);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
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
