#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/internal/BasicSchema.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class Constraint; }
namespace cereal { class SerializerContext; }
namespace cereal { struct ReflectionCtx; }
namespace cereal { struct SchemaReader; }
namespace cereal { struct SchemaWriter; }
namespace cereal { struct SerializerTraits; }
namespace cereal::internal { struct Result; }
// clang-format on

namespace cereal::internal {

class BasicTagSequenceSchema : public ::cereal::internal::BasicSchema {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CEREAL_INTERNAL_BASICTAGSEQUENCESCHEMA
public:
    BasicTagSequenceSchema& operator=(BasicTagSequenceSchema const&) = delete;
    BasicTagSequenceSchema(BasicTagSequenceSchema const&)            = delete;
    BasicTagSequenceSchema()                                         = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CEREAL_INTERNAL_BASICTAGSEQUENCESCHEMA
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BasicTagSequenceSchema();
#endif
    /**
     * @symbol
     * ??0BasicTagSequenceSchema\@internal\@cereal\@\@QEAA\@AEBUReflectionCtx\@2\@AEBV?$vector\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@\@std\@\@V?$allocator\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@\@std\@\@\@2\@\@std\@\@V?$unique_ptr\@VConstraint\@cereal\@\@U?$default_delete\@VConstraint\@cereal\@\@\@std\@\@\@5\@\@Z
     */
    MCAPI
    BasicTagSequenceSchema(struct cereal::ReflectionCtx const&, std::vector<struct std::pair<std::string, std::string>> const&, std::unique_ptr<class cereal::Constraint>);
    /**
     * @symbol
     * ??0BasicTagSequenceSchema\@internal\@cereal\@\@QEAA\@AEBUReflectionCtx\@2\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1\@Z
     */
    MCAPI BasicTagSequenceSchema(struct cereal::ReflectionCtx const&, std::string const&, std::string const&);
};

}; // namespace cereal::internal
