#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/util/molang/MolangParseConfig.h"

// auto generated inclusion list
#include "mc/molang/MolangVersion.h"
#include "mc/platform/brstd/flat_set.h"
#include "mc/util/MolangCompileResult.h"
#include "mc/util/MolangQueryFunctionReturnType.h"
#include "mc/util/molang/ExpressionOp.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class HashedString;
class MaterialVariants;
class RenderParams;
struct ExpressionQueries;
struct MolangClientTextureSet;
struct MolangDataDrivenGeometry;
struct MolangParseConfig;
struct MolangQueryFunction;
struct MolangScriptArg;
namespace Json { class Value; }
namespace Molang::details { class IComplexExpression; }
namespace Molang::details { class SourceTree; }
namespace cereal { struct ReflectionCtx; }
namespace mce { class Color; }
// clang-format on

class ExpressionNode {
public:
    // ExpressionNode inner types declare
    // clang-format off
    struct ResourceReference;
    // clang-format on

    // ExpressionNode inner types define
    struct ResourceReference {
    public:
// member variables
// NOLINTBEGIN
#ifdef LL_PLAT_S
        ::ll::UntypedStorage<8, 88> mUnkdeb2d8;
#else // LL_PLAT_C
        ::ll::UntypedStorage<8, 96> mUnkdeb2d8;
#endif
        ::ll::UntypedStorage<2, 2> mUnk80cca4;
        ::ll::UntypedStorage<1, 1> mUnk749abb;
        // NOLINTEND

#ifdef LL_PLAT_S
    public:
        // prevent constructor by default
        ResourceReference& operator=(ResourceReference const&);
        ResourceReference(ResourceReference const&);
        ResourceReference();

#else // LL_PLAT_C
    public:
        // prevent constructor by default
        ResourceReference& operator=(ResourceReference const&);
        ResourceReference(ResourceReference const&);

#endif
    public:
        // member functions
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCNAPI ResourceReference();

        MCNAPI explicit ResourceReference(::MolangDataDrivenGeometry const& geometry);

        MCNAPI explicit ResourceReference(::MaterialVariants const& matVariants);

        MCNAPI explicit ResourceReference(::MolangClientTextureSet const& textureSet);

        MCNAPI ~ResourceReference();
#endif
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCNAPI void* $ctor();

        MCNAPI void* $ctor(::MolangDataDrivenGeometry const& geometry);

        MCNAPI void* $ctor(::MaterialVariants const& matVariants);

        MCNAPI void* $ctor(::MolangClientTextureSet const& textureSet);
#endif
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCNAPI void $dtor();
#endif
        // NOLINTEND
    };

    using GetParticleTintFunc = ::std::function<::mce::Color(::Block const&, ::BlockSource&, ::BlockPos const&)>;

    using IComplexExpression = ::Molang::details::IComplexExpression;

    using MissingResourceSet =
        ::brstd::flat_set<::HashedString, ::std::less<::HashedString>, ::std::vector<::HashedString>>;

    using ResourceTable = ::std::unordered_map<::HashedString, ::ExpressionNode::ResourceReference>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::variant<::std::unique_ptr<::Molang::details::IComplexExpression>, float>> mImpl;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    ExpressionNode();

#else // LL_PLAT_C
#endif
public:
    ExpressionNode(
        std::string const&                expression,
        ::MolangVersion                   molangVersion,
        ::gsl::span<::HashedString const> querySetID
    )
    : ExpressionNode(expression, molangVersion) {
        MolangParseConfig config;
        config.mVersion          = molangVersion;
        config.mAllowedQuerySets = querySetID;
        parse(expression, config);
    }

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI ExpressionNode();
#endif

    MCAPI ExpressionNode(::ExpressionNode&&);

#ifdef LL_PLAT_C
    MCAPI explicit ExpressionNode(::MaterialVariants const& materialVariants);
#endif

    MCAPI ExpressionNode(::ExpressionNode const& rhs);

#ifdef LL_PLAT_C
    MCAPI explicit ExpressionNode(::Molang::details::SourceTree root);
#endif

    MCAPI ExpressionNode(::std::string const& expression, ::MolangVersion molangVersion);

#ifdef LL_PLAT_C
    MCAPI ExpressionNode(char const* expression, ::MolangVersion molangVersion);
#endif

    MCAPI ExpressionNode(::Json::Value const& value, ::MolangParseConfig const& config);

    MCAPI ExpressionNode(::MolangScriptArg const& value, ::ExpressionOp op);

    MCAPI float evalAsFloat(::RenderParams& renderParams) const;

    MCAPI ::MolangScriptArg const& evalGeneric(::RenderParams& renderParams) const;

    MCAPI ::std::string getExpressionString() const;

#ifdef LL_PLAT_C
    MCAPI bool hasVariableAssignments() const;
#endif

    MCAPI ::MolangCompileResult link();

    MCAPI ::ExpressionNode& operator=(::ExpressionNode&&);

#ifdef LL_PLAT_C
    MCAPI ::ExpressionNode& operator=(::MaterialVariants const& materialVariants);
#endif

    MCAPI ::ExpressionNode& operator=(::ExpressionNode const& rhs);

    MCAPI ::ExpressionNode& operator=(float value);

    MCAPI bool parse(::std::string_view expression, ::MolangParseConfig const& config);

#ifdef LL_PLAT_C
    MCAPI void
    replaceArrayVariables(::std::unordered_map<::HashedString, ::ExpressionNode>& dataMap, bool compileProgram);
#endif

    MCAPI ~ExpressionNode();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool _initializeMolangQueries(::ExpressionQueries&& queries);

    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

#ifdef LL_PLAT_S
    MCAPI static void initializeMolang(::ExpressionQueries&& queries);
#endif

#ifdef LL_PLAT_C
    MCAPI static ::std::function<
        ::MolangScriptArg const&(::RenderParams&, ::std::vector<::ExpressionNode> const&)> const*
    queryFunctionAccessorFromString(
        ::HashedString const&            functionName,
        ::MolangVersion                  molangVersion,
        ::MolangQueryFunctionReturnType& functionReturnType,
        bool                             missingIsOkay_returnNullIfSo
    );
#endif

    MCAPI static ::MolangQueryFunction& registerQueryFunction(
        ::std::string_view queryFunctionName,
        ::std::function<::MolangScriptArg const&(::RenderParams&, ::std::vector<::ExpressionNode> const&)> accessor,
        ::std::string_view                  documentation,
        ::MolangQueryFunctionReturnType     returnType,
        ::HashedString                      querySetIdentifier,
        uint64                              minArgumentCount,
        uint64                              maxArgumentCount,
        ::std::initializer_list<int> const& experiments
    );

    MCAPI static void
    unregisterQueryFunction(::std::string const& queryFunctionName, ::HashedString querySetIdentifier);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::function<::MolangScriptArg const&(::RenderParams&, ::std::vector<::ExpressionNode> const&)>&
    _defaultUnknownQueryFunction();

    MCAPI static ::std::function<::mce::Color(::Block const&, ::BlockSource&, ::BlockPos const&)>&
    mGetParticleTintFunc();

    MCAPI static ::std::unordered_multimap<::HashedString, ::MolangQueryFunction>& mQueryFunctionAccessors();

    MCAPI static ::std::unordered_map<::HashedString, ::std::unordered_set<::HashedString>>& mQuerySets();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor();
#endif

    MCAPI void* $ctor(::ExpressionNode&&);

#ifdef LL_PLAT_C
    MCAPI void* $ctor(::MaterialVariants const& materialVariants);
#endif

    MCAPI void* $ctor(::ExpressionNode const& rhs);

#ifdef LL_PLAT_C
    MCAPI void* $ctor(::Molang::details::SourceTree root);
#endif

    MCAPI void* $ctor(::std::string const& expression, ::MolangVersion molangVersion);

#ifdef LL_PLAT_C
    MCAPI void* $ctor(char const* expression, ::MolangVersion molangVersion);
#endif

    MCAPI void* $ctor(::Json::Value const& value, ::MolangParseConfig const& config);

    MCAPI void* $ctor(::MolangScriptArg const& value, ::ExpressionOp op);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

// free functions
// NOLINTBEGIN
MCAPI bool operator==(::ExpressionNode const& lhs, ::ExpressionNode const& rhs);
// NOLINTEND
