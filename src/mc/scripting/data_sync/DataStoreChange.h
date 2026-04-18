#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/dynamic/DynamicValue.h"

namespace Bedrock::DDUI {

struct DataStoreChange {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>          mDataStoreName;
    ::ll::TypedStorage<8, 32, ::std::string>          mProperty;
    ::ll::TypedStorage<4, 4, uint>                    mUpdateCount;
    ::ll::TypedStorage<8, 72, ::cereal::DynamicValue> mNewData;
    // NOLINTEND

public:
    // prevent constructor by default
    DataStoreChange(DataStoreChange const&);
    DataStoreChange();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Bedrock::DDUI::DataStoreChange& operator=(::Bedrock::DDUI::DataStoreChange&&);

    MCAPI ::Bedrock::DDUI::DataStoreChange& operator=(::Bedrock::DDUI::DataStoreChange const&);

    MCAPI bool operator==(::Bedrock::DDUI::DataStoreChange const& rhs) const;

    MCAPI ~DataStoreChange();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::DDUI
