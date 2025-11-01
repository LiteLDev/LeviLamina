#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Publisher.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::DDUI { struct DataStoreChange; }
namespace Bedrock::DDUI { struct DataStoreObject; }
namespace Bedrock::DDUI { struct DataStoreRemoval; }
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
// clang-format on

namespace Bedrock::DDUI {

class DataStoreSync {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk8c6282;
    ::ll::UntypedStorage<8, 64> mUnk6bb4e6;
    ::ll::UntypedStorage<8, 64> mUnkc497df;
    ::ll::UntypedStorage<8, 24> mUnk672a46;
    // NOLINTEND

public:
    // prevent constructor by default
    DataStoreSync& operator=(DataStoreSync const&);
    DataStoreSync(DataStoreSync const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DataStoreSync();

    // vIndex: 1
    virtual void clear(::std::string const& datastoreName, bool addToOutgoingChanges);

    // vIndex: 2
    virtual void applyChanges(
        ::std::vector<::std::variant<::Bedrock::DDUI::DataStoreChange, ::Bedrock::DDUI::DataStoreRemoval>> const&
    ) = 0;

    // vIndex: 3
    virtual void assertAppropriateThread() const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DataStoreSync();

    MCNAPI void
    set(::std::string const&                    datastoreName,
        ::std::string const&                    property,
        ::Bedrock::DDUI::DataStoreObject const& obj,
        bool                                    addToOutgoingChanges);
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
