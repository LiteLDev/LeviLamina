#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Publisher.h"

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
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkdbc653;
    ::ll::UntypedStorage<8, 64> mUnk4b8e07;
    ::ll::UntypedStorage<8, 64> mUnk1938e1;
    ::ll::UntypedStorage<8, 64> mUnk4d84f4;
    ::ll::UntypedStorage<8, 24> mUnk1d154f;
    // NOLINTEND

public:
    // prevent constructor by default
    DataStoreSync& operator=(DataStoreSync const&);
    DataStoreSync(DataStoreSync const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DataStoreSync();

    virtual void clear(::std::string const& datastoreName, bool addToOutgoingChanges);

    virtual void assertAppropriateThread() const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DataStoreSync();

    MCNAPI ::cereal::DynamicValue const* get(::std::string const& datastoreName, ::std::string const& property) const;

    MCNAPI ::nonstd::
        expected<::gsl::not_null<::cereal::DynamicValue const*>, ::Bedrock::DDUI::PathUtility::PathQueryError>
        getPath(::std::string const& dataStoreName, ::std::string const& property, ::std::string const& path) const;

    MCNAPI ::Bedrock::PubSub::Subscription listen(
        ::std::string const&                                 datastoreName,
        ::std::string const&                                 property,
        ::std::string const&                                 path,
        ::std::function<void(::cereal::DynamicValue const*)> onChange
    );

    MCNAPI void
    set(::std::string const&          datastoreName,
        ::std::string const&          property,
        ::cereal::DynamicValue const& obj,
        bool                          addToOutgoingChanges);

    MCNAPI ::nonstd::expected<void, ::Bedrock::DDUI::PathUtility::PathQueryError> setObjectPath(
        ::std::string const&          dataStoreName,
        ::std::string const&          propertyName,
        ::std::string const&          path,
        ::cereal::DynamicValue const& currentData,
        ::std::string const&          newDataString
    );

    MCNAPI ::nonstd::expected<void, ::Bedrock::DDUI::PathUtility::PathQueryError> setPath(
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
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $clear(::std::string const& datastoreName, bool addToOutgoingChanges);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::DDUI
