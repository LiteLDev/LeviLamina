#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::DDUI {

struct DataStoreUpdate {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                               mDataStoreName;
    ::ll::TypedStorage<8, 32, ::std::string>                               mProperty;
    ::ll::TypedStorage<4, 4, uint>                                         mPropertyUpdateCount;
    ::ll::TypedStorage<4, 4, uint>                                         mPathUpdateCount;
    ::ll::TypedStorage<8, 32, ::std::string>                               mPath;
    ::ll::TypedStorage<8, 40, ::std::variant<double, bool, ::std::string>> mData;
    // NOLINTEND

public:
    // prevent constructor by default
    DataStoreUpdate(DataStoreUpdate const&);
    DataStoreUpdate();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DataStoreUpdate(::Bedrock::DDUI::DataStoreUpdate&&);

    MCAPI ::Bedrock::DDUI::DataStoreUpdate& operator=(::Bedrock::DDUI::DataStoreUpdate&&);

    MCAPI ::Bedrock::DDUI::DataStoreUpdate& operator=(::Bedrock::DDUI::DataStoreUpdate const&);

    MCAPI bool operator==(::Bedrock::DDUI::DataStoreUpdate const& rhs) const;

    MCAPI ~DataStoreUpdate();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Bedrock::DDUI::DataStoreUpdate&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::DDUI
