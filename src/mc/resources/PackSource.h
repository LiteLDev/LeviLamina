#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackOrigin.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
class IContentKeyProvider;
class IPackIOProvider;
class IPackManifestFactory;
class Pack;
class PackSourceReport;
class PackStorageContainer;
class TaskGroup;
struct PackIdVersion;
struct PackSourceLoadOptions;
struct PackSourceLoadResult;
struct PackSourceOptions;
struct PackStorage;
namespace PackCommand { struct UpgradeLegacyDependenciesBatch; }
// clang-format on

class PackSource : public ::Bedrock::EnableNonOwnerReferences {
public:
    // PackSource inner types declare
    // clang-format off
    struct PackTaskData;
    class RequiredPackOrigin;
    class RequiredPackType;
    class RequiredResourceOrBehaviorPackType;
    // clang-format on

    // PackSource inner types define
    struct PackTaskData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mUnk673f56;
        ::ll::UntypedStorage<8, 24> mUnk1dbbeb;
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

    class RequiredPackOrigin {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnk6149af;
        // NOLINTEND

    public:
        // prevent constructor by default
        RequiredPackOrigin& operator=(RequiredPackOrigin const&);
        RequiredPackOrigin(RequiredPackOrigin const&);
        RequiredPackOrigin();
    };

    class RequiredPackType {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnka29ba2;
        // NOLINTEND

    public:
        // prevent constructor by default
        RequiredPackType& operator=(RequiredPackType const&);
        RequiredPackType(RequiredPackType const&);
        RequiredPackType();

    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static ::PackType assertValidPackType(::PackType type);
        // NOLINTEND
    };

    class RequiredResourceOrBehaviorPackType {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnk2a81d8;
        // NOLINTEND

    public:
        // prevent constructor by default
        RequiredResourceOrBehaviorPackType& operator=(RequiredResourceOrBehaviorPackType const&);
        RequiredResourceOrBehaviorPackType(RequiredResourceOrBehaviorPackType const&);
        RequiredResourceOrBehaviorPackType();

    public:
        // member functions
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCNAPI explicit RequiredResourceOrBehaviorPackType(::PackType type);
#endif

        MCNAPI explicit operator ::PackType() const;
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCNAPI void* $ctor(::PackType type);
#endif
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::IPackIOProvider>> const> mIO;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::TaskGroup>>>             mTaskGroup;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::PackStorageContainer>>>  mContainer;
    // NOLINTEND

public:
    // prevent constructor by default
    PackSource();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PackSource() = 0;

    virtual void forEachPackShared(::brstd::function_ref<void(::gsl::not_null<::std::shared_ptr<::Pack>>)> callback);

    virtual ::PackOrigin getPackOrigin() const;

    virtual ::PackType getPackType() const;

    virtual void _buildSourcesForLoad(::std::vector<::gsl::not_null<::PackSource*>>& sources);

    virtual ::PackSourceLoadResult _loadImpl(::PackSourceLoadOptions&& options) = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit PackSource(::PackSourceOptions options);

#ifdef LL_PLAT_C
    MCAPI void _addPack(::std::shared_ptr<::Pack> pack);

    MCAPI ::Bedrock::Threading::Async<void>
    _addPacks(::std::vector<::gsl::not_null<::std::shared_ptr<::Pack>>>&& packs);
#endif

    MCAPI ::PackSourceLoadResult _applyAndFinishLoadTask(::std::shared_ptr<::PackSource::PackTaskData> task);

    MCAPI ::PackSourceLoadResult _createImmediateLoadResult();

#ifdef LL_PLAT_C
    MCAPI ::std::vector<::gsl::not_null<::std::shared_ptr<::Pack>>> _getPacks() const;
#endif

    MCAPI ::PackStorage _getStorage() const;

    MCAPI ::PackSourceLoadResult
    _getTaskData(::brstd::function_ref<::PackSourceLoadResult(::std::shared_ptr<::PackSource::PackTaskData>)> task);

    MCAPI bool _removePack(::brstd::function_ref<bool(::Pack const&)> predicate);

    MCAPI ::PackSourceLoadResult _returnOriginalPacks(::std::shared_ptr<::PackSource::PackTaskData> task);

#ifdef LL_PLAT_C
    MCFOLD void _setPacks(::std::vector<::gsl::not_null<::std::shared_ptr<::Pack>>>&& packs);

    MCAPI ::std::shared_ptr<::Pack> fetchPack(::PackIdVersion const& packId);
#endif

    MCFOLD void forEachPack(::std::function<void(::Pack&)> callback);

    MCFOLD void forEachPackConst(::std::function<void(::Pack const&)> callback) const;

#ifdef LL_PLAT_C
    MCAPI ::Bedrock::Threading::Async<::std::vector<::gsl::not_null<::std::shared_ptr<::Pack const>>>> getPacks();
#endif

    MCAPI ::PackSourceReport load(
        ::IPackManifestFactory&                                           manifestFactory,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider
    );

    MCAPI ::PackSourceLoadResult loadImmediate(
        ::IPackManifestFactory&                                           manifestFactory,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider
    );

    MCAPI ::PackSourceLoadResult requestLoad(::PackSourceLoadOptions&& options);

    MCAPI void
    resolveUpgradeDependencies(::std::shared_ptr<::Pack> pack, ::PackCommand::UpgradeLegacyDependenciesBatch& commands);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::PackSourceOptions options);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $forEachPackShared(::brstd::function_ref<void(::gsl::not_null<::std::shared_ptr<::Pack>>)> callback);

    MCFOLD ::PackOrigin $getPackOrigin() const;

    MCFOLD ::PackType $getPackType() const;

    MCAPI void $_buildSourcesForLoad(::std::vector<::gsl::not_null<::PackSource*>>& sources);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
