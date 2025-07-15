#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackOrigin.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
class IContentKeyProvider;
class IPackManifestFactory;
class Pack;
class PackSourceReport;
struct PackSourceLoadOptions;
struct PackSourceLoadResult;
struct PackSourceOptions;
namespace PackCommand { struct UpgradeLegacyDependenciesBatch; }
// clang-format on

class PackSource {
public:
    // PackSource inner types declare
    // clang-format off
    struct PackTaskData;
    // clang-format on

    // PackSource inner types define
    struct PackTaskData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mUnk92b8ed;
        ::ll::UntypedStorage<8, 24> mUnk99f27c;
        ::ll::UntypedStorage<8, 64> mUnke8ed21;
        ::ll::UntypedStorage<8, 64> mUnka1631e;
        // NOLINTEND

    public:
        // prevent constructor by default
        PackTaskData& operator=(PackTaskData const&);
        PackTaskData(PackTaskData const&);
        PackTaskData();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~PackTaskData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkbebb21;
    ::ll::UntypedStorage<8, 24> mUnk38d360;
    ::ll::UntypedStorage<8, 64> mUnk3a6778;
    // NOLINTEND

public:
    // prevent constructor by default
    PackSource& operator=(PackSource const&);
    PackSource(PackSource const&);
    PackSource();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PackSource() = 0;

    // vIndex: 1
    virtual void forEachPackConst(::std::function<void(::Pack const&)> callback) const;

    // vIndex: 2
    virtual void forEachPack(::std::function<void(::Pack&)> callback);

    // vIndex: 3
    virtual ::PackOrigin getPackOrigin() const;

    // vIndex: 4
    virtual ::PackType getPackType() const;

    // vIndex: 5
    virtual void _buildSourcesForLoad(::std::vector<::gsl::not_null<::PackSource*>>& sources);

    // vIndex: 6
    virtual ::PackSourceLoadResult _loadImpl(::PackSourceLoadOptions&&) = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PackSource(::PackSourceOptions options);

    MCNAPI ::PackSourceLoadResult _applyAndFinishLoadTask(::std::shared_ptr<::PackSource::PackTaskData> task);

    MCNAPI ::PackSourceLoadResult
    _getTaskData(::brstd::function_ref<::PackSourceLoadResult(::std::shared_ptr<::PackSource::PackTaskData>)> task);

    MCNAPI bool _removePack(::brstd::function_ref<bool(::Pack const&)> predicate);

    MCNAPI ::PackSourceLoadResult _returnOriginalPacks(::std::shared_ptr<::PackSource::PackTaskData> task);

    MCNAPI void _setPacks(::std::vector<::gsl::not_null<::std::shared_ptr<::Pack>>>&& packs);

    MCNAPI ::PackSourceReport load(
        ::IPackManifestFactory&                                           manifestFactory,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider
    );

    MCNAPI ::PackSourceLoadResult requestLoad(::PackSourceLoadOptions&& options);

    MCNAPI void resolveUpgradeDependencies(::Pack& pack, ::PackCommand::UpgradeLegacyDependenciesBatch& commands);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::PackSourceOptions options);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $forEachPackConst(::std::function<void(::Pack const&)> callback) const;

    MCNAPI void $forEachPack(::std::function<void(::Pack&)> callback);

    MCNAPI ::PackOrigin $getPackOrigin() const;

    MCNAPI ::PackType $getPackType() const;

    MCNAPI void $_buildSourcesForLoad(::std::vector<::gsl::not_null<::PackSource*>>& sources);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
