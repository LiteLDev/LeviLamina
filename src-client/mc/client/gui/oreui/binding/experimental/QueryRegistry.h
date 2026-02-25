#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/experimental/ECapabilities.h"
#include "mc/client/gui/oreui/binding/experimental/IdType.h"
#include "mc/client/gui/oreui/binding/experimental/interface/IBindable.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/platform/brstd/flat_map.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::Experimental::Debug { struct QueryInformation; }
namespace OreUI::Experimental::Detail { class Binder; }
namespace OreUI::Experimental::Detail { class IHandlerFactory; }
namespace OreUI::Experimental::Detail { class IQuery; }
// clang-format on

namespace OreUI::Experimental::Detail {

class QueryRegistry : public ::OreUI::Experimental::Detail::IBindable {
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
        using FactoryPtr = ::std::unique_ptr<::OreUI::Experimental::Detail::IHandlerFactory>;

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::Experimental::Detail::IHandlerFactory>> mHandlerFactory;
        ::ll::TypedStorage<8, 8, void*>                                                             mHandle;
        // NOLINTEND
    };

    class LiveQuery {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::OreUI::Experimental::Detail::IdType>                    mId;
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::Experimental::Detail::IQuery>> mQuery;
        ::ll::TypedStorage<8, 8, ::OreUI::Experimental::Detail::QueryRegistry*>            mRegistry;
        ::ll::TypedStorage<4, 4, int>                                                      mRank;
        ::ll::TypedStorage<1, 1, ::OreUI::Experimental::ECapabilities>                     mCapabilities;
        ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                         mToken;
        // NOLINTEND

    public:
        // prevent constructor by default
        LiveQuery& operator=(LiveQuery const&);
        LiveQuery(LiveQuery const&);
        LiveQuery();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI LiveQuery(::OreUI::Experimental::Detail::QueryRegistry::LiveQuery&& other);

        MCAPI LiveQuery(
            ::OreUI::Experimental::Detail::Binder const&             binder,
            ::OreUI::Experimental::Detail::IdType const&             id,
            ::OreUI::Experimental::ECapabilities                     capabilities,
            ::std::unique_ptr<::OreUI::Experimental::Detail::IQuery> query,
            ::OreUI::Experimental::Detail::QueryRegistry*            registry,
            int                                                      rank
        );

        MCAPI ::OreUI::Experimental::Detail::QueryRegistry::LiveQuery&
        operator=(::OreUI::Experimental::Detail::QueryRegistry::LiveQuery&& other);

        MCAPI ~LiveQuery();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::OreUI::Experimental::Detail::QueryRegistry::LiveQuery&& other);

        MCAPI void* $ctor(
            ::OreUI::Experimental::Detail::Binder const&             binder,
            ::OreUI::Experimental::Detail::IdType const&             id,
            ::OreUI::Experimental::ECapabilities                     capabilities,
            ::std::unique_ptr<::OreUI::Experimental::Detail::IQuery> query,
            ::OreUI::Experimental::Detail::QueryRegistry*            registry,
            int                                                      rank
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
        ::ll::TypedStorage<8, 8, ::OreUI::Experimental::Detail::IdType> id;
        ::ll::TypedStorage<4, 4, int>                                   rank;
        ::ll::TypedStorage<
            8,
            8,
            ::std::reference_wrapper<::brstd::flat_map<
                ::OreUI::Experimental::Detail::IdType,
                ::OreUI::Experimental::Detail::QueryRegistry::LiveQuery,
                ::std::less<::OreUI::Experimental::Detail::IdType>,
                ::std::vector<::OreUI::Experimental::Detail::IdType>,
                ::std::vector<::OreUI::Experimental::Detail::QueryRegistry::LiveQuery>>>>
            container;
        // NOLINTEND
    };

    using QueryPtr = ::std::unique_ptr<::OreUI::Experimental::Detail::IQuery>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::OreUI::Experimental::Detail::Binder>> mBinder;
    ::ll::TypedStorage<8, 8, void*>                                                           mDestroyHandle;
    ::ll::TypedStorage<1, 1, bool>                                                            mPurgeQueries;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::std::string, ::OreUI::Experimental::Detail::QueryRegistry::QueryTemplate>>
        mQueryTemplates;
    ::ll::TypedStorage<
        8,
        56,
        ::brstd::flat_map<
            ::OreUI::Experimental::Detail::IdType,
            ::OreUI::Experimental::Detail::QueryRegistry::LiveQuery,
            ::std::less<::OreUI::Experimental::Detail::IdType>,
            ::std::vector<::OreUI::Experimental::Detail::IdType>,
            ::std::vector<::OreUI::Experimental::Detail::QueryRegistry::LiveQuery>>>
        mReactiveQueries;
    ::ll::TypedStorage<
        8,
        56,
        ::brstd::flat_map<
            ::OreUI::Experimental::Detail::IdType,
            ::OreUI::Experimental::Detail::QueryRegistry::LiveQuery,
            ::std::less<::OreUI::Experimental::Detail::IdType>,
            ::std::vector<::OreUI::Experimental::Detail::IdType>,
            ::std::vector<::OreUI::Experimental::Detail::QueryRegistry::LiveQuery>>>
                                                                                                       mDynamicQueries;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::Experimental::Detail::QueryRegistry::DirtyQuery>> mDirtyQueries;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::Experimental::Detail::QueryRegistry::LiveQuery>>  mAdditionQueue;
    ::ll::TypedStorage<1, 1, bool>                                                                     mIterating;
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
    MCAPI explicit QueryRegistry(::OreUI::Experimental::Detail::Binder& binder);

    MCAPI void _createQuery(
        ::OreUI::Experimental::Detail::IdType const&             id,
        ::OreUI::Experimental::ECapabilities                     capabilities,
        ::std::unique_ptr<::OreUI::Experimental::Detail::IQuery> query,
        int                                                      rank
    );

    MCAPI void _destroyQuery(::OreUI::Experimental::Detail::IdType const& id);

    MCAPI void _syncQueries();

    MCAPI ::std::vector<::OreUI::Experimental::Debug::QueryInformation> getQueryInformation() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::Experimental::Detail::Binder& binder);
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

} // namespace OreUI::Experimental::Detail
