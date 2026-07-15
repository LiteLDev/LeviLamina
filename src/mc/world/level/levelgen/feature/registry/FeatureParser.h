#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ContextArea.h"
#include "mc/deps/puv/ParserBase.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
struct FeatureParserContext;
namespace FeatureLoading { struct FeatureRootParseContext; }
namespace JsonUtil { class EmptyClass; }
namespace Puv { class Input; }
namespace Puv { class LoadResultAny; }
// clang-format on

class FeatureParser : public ::Puv::ParserBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::FeatureParserContext&> mContext;
    ::ll::TypedStorage<
        8,
        8,
        ::std::shared_ptr<
            ::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::FeatureLoading::FeatureRootParseContext>> const&>
        mSchema;
    // NOLINTEND

public:
    // prevent constructor by default
    FeatureParser& operator=(FeatureParser const&);
    FeatureParser(FeatureParser const&);
    FeatureParser();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Puv::LoadResultAny doParse(::Puv::Input const&, ::cereal::ContextArea) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
