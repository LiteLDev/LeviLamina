#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
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
namespace Core { class Path; }
// clang-format on

class WorldHistoryPackSource : public ::PackSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkf5b2e1;
    ::ll::UntypedStorage<1, 1>  mUnke41f05;
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
    MCAPI WorldHistoryPackSource(::Core::Path const& pathToWorld, ::PackType type);

    MCAPI void _addPackFromHistoryPack(::WorldPackHistory const& worldPackHistory);

    MCAPI ::std::unique_ptr<::Pack> _createPackFromHistoryPack(::WorldPackHistory const& worldPackHistory);

    MCAPI bool _readWorldHistoryFile();

    MCFOLD ::Core::PathBuffer<::std::string> const& getPathToWorld() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Core::PathBuffer<::std::string>
    generateHistoryFilePath(::Core::Path const& pathToWorld, ::PackType type);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Core::Path const& pathToWorld, ::PackType type);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $forEachPackConst(::std::function<void(::Pack const&)> callback) const;

    MCFOLD void $forEachPack(::std::function<void(::Pack&)> callback);

    MCFOLD ::PackOrigin $getPackOrigin() const;

    MCFOLD ::PackType $getPackType() const;

    MCAPI ::PackSourceReport $load(
        ::IPackManifestFactory&                                           manifestFactory,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
