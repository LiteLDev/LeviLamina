#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/ECapabilities.h"
#include "mc/client/gui/oreui/binding/IdType.h"
#include "mc/client/gui/oreui/binding/interface/IBindable.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/platform/brstd/flat_map.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::Debug { struct QueryInformation; }
namespace OreUI::Detail { class Binder; }
namespace OreUI::Detail { class IHandlerFactory; }
namespace OreUI::Detail { class IQuery; }
// clang-format on

namespace OreUI::Detail {

class QueryRegistry : public ::OreUI::Detail::IBindable {
public:
    // QueryRegistry inner types declare
    // clang-format off
    class QueryTemplate;
    class LiveQuery;
    struct DirtyQuery;
    // clang-format on

    // QueryRegistry inner types define
    class QueryTemplate {
    public:
        // QueryTemplate inner types define
        using FactoryPtr = ::std::unique_ptr<::OreUI::Detail::IHandlerFactory>;

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::Detail::IHandlerFactory>> mHandlerFactory;
        ::ll::TypedStorage<8, 8, void*>                                               mHandle;
        // NOLINTEND
    };

    class LiveQuery {
    public:
        // LiveQuery inner types define
        enum class EQueryState : uint {
            Unknown = 0,
            Active  = 1,
            Deleted = 2,
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::OreUI::Detail::IdType>                                mId;
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::Detail::IQuery>>             mQuery;
        ::ll::TypedStorage<8, 8, ::OreUI::Detail::QueryRegistry*>                        mRegistry;
        ::ll::TypedStorage<4, 4, int>                                                    mRank;
        ::ll::TypedStorage<1, 1, ::OreUI::ECapabilities>                                 mCapabilities;
        ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                       mToken;
        ::ll::TypedStorage<4, 4, ::OreUI::Detail::QueryRegistry::LiveQuery::EQueryState> mState;
        // NOLINTEND

    public:
        // prevent constructor by default
        LiveQuery& operator=(LiveQuery const&);
        LiveQuery(LiveQuery const&);
        LiveQuery();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI LiveQuery(::OreUI::Detail::QueryRegistry::LiveQuery&& other);

        MCAPI LiveQuery(
            ::OreUI::Detail::Binder const&             binder,
            ::OreUI::Detail::IdType const&             id,
            ::OreUI::ECapabilities                     capabilities,
            ::std::unique_ptr<::OreUI::Detail::IQuery> query,
            ::OreUI::Detail::QueryRegistry*            registry,
            int                                        rank
        );

        MCAPI ::OreUI::Detail::QueryRegistry::LiveQuery& operator=(::OreUI::Detail::QueryRegistry::LiveQuery&& other);

        MCAPI ~LiveQuery();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::OreUI::Detail::QueryRegistry::LiveQuery&& other);

        MCAPI void* $ctor(
            ::OreUI::Detail::Binder const&             binder,
            ::OreUI::Detail::IdType const&             id,
            ::OreUI::ECapabilities                     capabilities,
            ::std::unique_ptr<::OreUI::Detail::IQuery> query,
            ::OreUI::Detail::QueryRegistry*            registry,
            int                                        rank
        );
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    struct DirtyQuery {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::OreUI::Detail::IdType> id;
        ::ll::TypedStorage<4, 4, int>                     rank;
        ::ll::TypedStorage<
            8,
            8,
            ::std::reference_wrapper<::brstd::flat_map<
                ::OreUI::Detail::IdType,
                ::OreUI::Detail::QueryRegistry::LiveQuery,
                ::std::less<::OreUI::Detail::IdType>,
                ::std::vector<::OreUI::Detail::IdType>,
                ::std::vector<::OreUI::Detail::QueryRegistry::LiveQuery>>>>
            container;
        // NOLINTEND
    };

    using QueryPtr = ::std::unique_ptr<::OreUI::Detail::IQuery>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::OreUI::Detail::Binder>> mBinder;
    ::ll::TypedStorage<8, 8, void*>                                             mDestroyHandle;
    ::ll::TypedStorage<1, 1, bool>                                              mPurgeQueries;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::OreUI::Detail::QueryRegistry::QueryTemplate>>
        mQueryTemplates;
    ::ll::TypedStorage<
        8,
        48,
        ::brstd::flat_map<
            ::OreUI::Detail::IdType,
            ::OreUI::Detail::QueryRegistry::LiveQuery,
            ::std::less<::OreUI::Detail::IdType>,
            ::std::vector<::OreUI::Detail::IdType>,
            ::std::vector<::OreUI::Detail::QueryRegistry::LiveQuery>>>
        mReactiveQueries;
    ::ll::TypedStorage<
        8,
        48,
        ::brstd::flat_map<
            ::OreUI::Detail::IdType,
            ::OreUI::Detail::QueryRegistry::LiveQuery,
            ::std::less<::OreUI::Detail::IdType>,
            ::std::vector<::OreUI::Detail::IdType>,
            ::std::vector<::OreUI::Detail::QueryRegistry::LiveQuery>>>
                                                                                         mDynamicQueries;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::Detail::QueryRegistry::DirtyQuery>> mDirtyQueries;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::Detail::QueryRegistry::LiveQuery>>  mAdditionQueue;
    ::ll::TypedStorage<1, 1, bool>                                                       mIterating;
    // NOLINTEND

public:
    // prevent constructor by default
    QueryRegistry();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~QueryRegistry() /*override*/;

    virtual void onReadyForBindings() /*override*/;

    virtual void onSuspend() /*override*/;

    virtual void onBindingsReleased() /*override*/;

    virtual void update(double const time) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit QueryRegistry(::OreUI::Detail::Binder& binder);

    MCAPI void _createQuery(
        ::OreUI::Detail::IdType const&             id,
        ::OreUI::ECapabilities                     capabilities,
        ::std::unique_ptr<::OreUI::Detail::IQuery> query,
        int                                        rank
    );

    MCAPI void _syncQueries();

    MCAPI ::std::vector<::OreUI::Debug::QueryInformation> getQueryInformation() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::Detail::Binder& binder);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onReadyForBindings();

    MCAPI void $onSuspend();

    MCFOLD void $onBindingsReleased();

    MCAPI void $update(double const time);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI::Detail
