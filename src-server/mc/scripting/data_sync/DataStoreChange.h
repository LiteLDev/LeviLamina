#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::DDUI {

struct DataStoreChange {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk4d68f8;
    ::ll::UntypedStorage<8, 32> mUnk254533;
    ::ll::UntypedStorage<4, 4> mUnk488ed9;
    ::ll::UntypedStorage<8, 72> mUnk91b5ae;
    // NOLINTEND

public:
    // prevent constructor by default
    DataStoreChange& operator=(DataStoreChange const&);
    DataStoreChange(DataStoreChange const&);
    DataStoreChange();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Bedrock::DDUI::DataStoreChange& operator=(::Bedrock::DDUI::DataStoreChange&&);

    MCNAPI bool operator==(::Bedrock::DDUI::DataStoreChange const& rhs) const;

    MCNAPI ~DataStoreChange();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
