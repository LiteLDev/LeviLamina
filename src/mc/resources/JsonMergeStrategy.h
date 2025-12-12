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
    ::ll::UntypedStorage<4, 4>  mUnk7b8adc;
    // NOLINTEND

public:
    // prevent constructor by default
    JsonMergeStrategy& operator=(JsonMergeStrategy const&);
    JsonMergeStrategy(JsonMergeStrategy const&);
    JsonMergeStrategy();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void mergeFiles(::std::vector<::LoadedResourceData> const& fileStack) /*override*/;

    virtual bool _parseJson(::Json::Reader& reader, ::std::string const& fileName, ::Json::Value& root) const;

    virtual void _preMergeTransform(::Json::Value&);

    virtual void _preMergePacketTransform(int const);

#ifdef LL_PLAT_S
    virtual ~JsonMergeStrategy() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~JsonMergeStrategy() /*override*/;
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C void _recursiveMerge(::Json::Value& root, ::Json::Value const& object);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $mergeFiles(::std::vector<::LoadedResourceData> const& fileStack);

    MCNAPI bool $_parseJson(::Json::Reader& reader, ::std::string const& fileName, ::Json::Value& root) const;

    MCNAPI void $_preMergeTransform(::Json::Value&);

    MCNAPI void $_preMergePacketTransform(int const);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
