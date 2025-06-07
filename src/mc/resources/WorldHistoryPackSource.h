#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackOrigin.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/resources/PackSource.h"

// auto generated forward declare list
// clang-format off
class IContentKeyProvider;
class IPackManifestFactory;
class Pack;
class PackSourceReport;
class WorldPackHistory;
// clang-format on

class WorldHistoryPackSource : public ::PackSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkbc6895;
    ::ll::UntypedStorage<1, 1>  mUnk712674;
    ::ll::UntypedStorage<8, 24> mUnk9aff05;
    ::ll::UntypedStorage<8, 24> mUnk4f8c50;
    ::ll::UntypedStorage<1, 1>  mUnkb16dc9;
    ::ll::UntypedStorage<1, 1>  mUnk664567;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldHistoryPackSource& operator=(WorldHistoryPackSource const&);
    WorldHistoryPackSource(WorldHistoryPackSource const&);
    WorldHistoryPackSource();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WorldHistoryPackSource() /*override*/;

    // vIndex: 1
    virtual void forEachPackConst(::std::function<void(::Pack const&)> callback) const /*override*/;

    // vIndex: 2
    virtual void forEachPack(::std::function<void(::Pack&)> callback) /*override*/;

    // vIndex: 3
    virtual ::PackOrigin getPackOrigin() const /*override*/;

    // vIndex: 4
    virtual ::PackType getPackType() const /*override*/;

    // vIndex: 5
    virtual ::PackSourceReport load(
        ::IPackManifestFactory&                                           manifestFactory,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _addPackFromHistoryPack(::WorldPackHistory const& worldPackHistory);

    MCNAPI ::std::unique_ptr<::Pack> _createPackFromHistoryPack(::WorldPackHistory const& worldPackHistory);

    MCNAPI bool _readWorldHistoryFile();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $forEachPackConst(::std::function<void(::Pack const&)> callback) const;

    MCNAPI void $forEachPack(::std::function<void(::Pack&)> callback);

    MCNAPI ::PackOrigin $getPackOrigin() const;

    MCNAPI ::PackType $getPackType() const;

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
