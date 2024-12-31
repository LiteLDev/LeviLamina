#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/ResourcePackMergeStrategy.h"

// auto generated forward declare list
// clang-format off
class LoadedResourceData;
namespace Json { class Reader; }
namespace Json { class Value; }
// clang-format on

class JsonMergeStrategy : public ::ResourcePackMergeStrategy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk42b906;
    ::ll::UntypedStorage<8, 8>  mUnk842390;
    ::ll::UntypedStorage<8, 64> mUnkc6e8bc;
    // NOLINTEND

public:
    // prevent constructor by default
    JsonMergeStrategy& operator=(JsonMergeStrategy const&);
    JsonMergeStrategy(JsonMergeStrategy const&);
    JsonMergeStrategy();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void mergeFiles(::std::vector<::LoadedResourceData> const&) /*override*/;

    // vIndex: 2
    virtual bool _parseJson(::Json::Reader&, ::std::string const&, ::Json::Value&) const;

    // vIndex: 3
    virtual void _preMergeTransform(::Json::Value&);

    // vIndex: 0
    virtual ~JsonMergeStrategy() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
