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
    ::ll::UntypedStorage<8, 8> mUnk842390;
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

#ifdef LL_PLAT_S
    virtual bool _parseJson(::Json::Reader&, ::std::string const&, ::Json::Value&) const;
#else // LL_PLAT_C
    virtual bool _parseJson(::Json::Reader& reader, ::std::string const& fileContent, ::Json::Value& root) const;
#endif

#ifdef LL_PLAT_S
    virtual void _preMergeTransform(::Json::Value&, ::LoadedResourceData const&);
#else // LL_PLAT_C
    virtual void _preMergeTransform(::Json::Value& root, ::LoadedResourceData const& context);
#endif

    virtual void _preMergePacketTransform(int const);

#ifdef LL_PLAT_S
    virtual bool _preMergeObjectTransform(::Json::Value&, ::Json::Value const&);
#else // LL_PLAT_C
    virtual bool _preMergeObjectTransform(::Json::Value& root, ::Json::Value const& object);
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void _recursiveMerge(::Json::Value& root, ::Json::Value const& object);
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $mergeFiles(::std::vector<::LoadedResourceData> const& fileStack);

    MCNAPI bool $_parseJson(::Json::Reader& reader, ::std::string const& fileContent, ::Json::Value& root) const;

    MCNAPI void $_preMergeTransform(::Json::Value& root, ::LoadedResourceData const& context);

    MCNAPI void $_preMergePacketTransform(int const);

    MCNAPI bool $_preMergeObjectTransform(::Json::Value& root, ::Json::Value const& object);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
