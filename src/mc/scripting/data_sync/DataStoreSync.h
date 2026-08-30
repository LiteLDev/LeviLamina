#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/scripting/data_sync/DataStoreChange.h"
#include "mc/scripting/data_sync/DataStoreRemoval.h"
#include "mc/scripting/data_sync/DataStoreUpdate.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::DDUI::PathUtility { struct PathQueryError; }
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
namespace cereal { class DynamicValue; }
// clang-format on

namespace Bedrock::DDUI {

class DataStoreSync {
public:
    // DataStoreSync inner types define
    using PropertyChangePublisher = ::Bedrock::PubSub::
        Publisher<void(::cereal::DynamicValue const*), ::Bedrock::PubSub::ThreadModel::SingleThreaded, 0>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::std::string, ::std::unordered_map<::std::string, ::cereal::DynamicValue>>>
        mDataStores;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::std::string,
            ::std::unordered_map<
                ::std::string,
                ::std::unordered_map<
                    ::std::string,
                    ::Bedrock::PubSub::Publisher<
                        void(::cereal::DynamicValue const*),
                        ::Bedrock::PubSub::ThreadModel::SingleThreaded,
                        0>,
                    ::std::hash<::std::string>,
                    ::std::equal_to<::std::string>>>>>
        mPropertyPathPublishers;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::unordered_map<::std::string, uint>>>
        mPropertyUpdateCount;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::std::string,
            ::std::unordered_map<
                ::std::string,
                ::std::unordered_map<::std::string, uint, ::std::hash<::std::string>, ::std::equal_to<::std::string>>>>>
        mPathUpdateCount;
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::std::variant<
            ::Bedrock::DDUI::DataStoreUpdate,
            ::Bedrock::DDUI::DataStoreChange,
            ::Bedrock::DDUI::DataStoreRemoval>>>
        mOutgoingChanges;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~DataStoreSync() = default;
#else // LL_PLAT_C
    virtual ~DataStoreSync();
#endif

    virtual void clear(::std::string const& datastoreName, bool addToOutgoingChanges);

    virtual void assertAppropriateThread() const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI DataStoreSync();
#endif

    MCAPI ::nonstd::
        expected<::gsl::not_null<::cereal::DynamicValue const*>, ::Bedrock::DDUI::PathUtility::PathQueryError>
        getPath(::std::string const& dataStoreName, ::std::string const& property, ::std::string const& path) const;

    MCAPI ::Bedrock::PubSub::Subscription listen(
        ::std::string const&                                 datastoreName,
        ::std::string const&                                 property,
        ::std::string const&                                 path,
        ::std::function<void(::cereal::DynamicValue const*)> onChange
    );

    MCAPI void
    set(::std::string const&          datastoreName,
        ::std::string const&          property,
        ::cereal::DynamicValue const& obj,
        bool                          addToOutgoingChanges);

    MCAPI ::nonstd::expected<void, ::Bedrock::DDUI::PathUtility::PathQueryError> setPath(
        ::std::string const&                               dataStoreName,
        ::std::string const&                               propertyName,
        ::std::string const&                               path,
        ::std::variant<double, bool, ::std::string> const& data,
        bool                                               addToOutgoing,
        bool                                               allowStringToObjectUpdates
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $clear(::std::string const& datastoreName, bool addToOutgoingChanges);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::DDUI
