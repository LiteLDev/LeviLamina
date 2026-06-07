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
    ::ll::UntypedStorage<8, 32> mUnk3f2bfa;
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
#ifdef LL_PLAT_S
    virtual void mergeFiles(::std::vector<::LoadedResourceData> const&) /*override*/;
#else // LL_PLAT_C
    virtual void mergeFiles(::std::vector<::LoadedResourceData> const& fileStack) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual bool _parseJson(::Json::Reader&, ::std::string const&, ::Json::Value&) const;
#else // LL_PLAT_C
    virtual bool _parseJson(::Json::Reader& reader, ::std::string const& fileName, ::Json::Value& root) const;
#endif

#ifdef LL_PLAT_S
    virtual void _preMergeTransform(::Json::Value&);
#else // LL_PLAT_C
    virtual void _preMergeTransform(::Json::Value& value);
#endif

    virtual void _preMergePacketTransform(int const);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI JsonMergeStrategy(
        ::std::string const&                                               fileName,
        ::Json::Value&                                                     root,
        ::std::function<bool(::Json::Value&, ::Json::Value const&)> const& preMergeCallback
    );

    MCNAPI void _recursiveMerge(::Json::Value& root, ::Json::Value const& object);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(
        ::std::string const&                                               fileName,
        ::Json::Value&                                                     root,
        ::std::function<bool(::Json::Value&, ::Json::Value const&)> const& preMergeCallback
    );
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $mergeFiles(::std::vector<::LoadedResourceData> const& fileStack);

    MCNAPI bool $_parseJson(::Json::Reader& reader, ::std::string const& fileName, ::Json::Value& root) const;

    MCNAPI void $_preMergeTransform(::Json::Value& value);

    MCNAPI void $_preMergePacketTransform(int const);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
