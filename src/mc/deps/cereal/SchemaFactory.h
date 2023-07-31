#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
namespace cereal { struct Schema; }
namespace cereal { struct SerializerTraits; }
namespace cereal::internal { class BasicCompositeSchema; }
namespace cereal::internal { class BasicSchema; }
// clang-format on

namespace cereal {

class SchemaFactory {

public:
    // prevent constructor by default
    SchemaFactory& operator=(SchemaFactory const&) = delete;
    SchemaFactory(SchemaFactory const&)            = delete;
    SchemaFactory()                                = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ??0SchemaFactory\@cereal\@\@QEAA\@USerializerTraits\@1\@AEAUReflectionCtx\@1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@2\@Z
     */
    MCAPI
    SchemaFactory(struct cereal::SerializerTraits, struct cereal::ReflectionCtx&, std::string const&, std::string const&);
    /**
     * @symbol
     * ??0SchemaFactory\@cereal\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCAPI SchemaFactory(std::string const&, std::string const&);
    /**
     * @symbol
     * ?bind\@SchemaFactory\@cereal\@\@QEAAAEAV12\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@00\@Z
     */
    MCAPI class cereal::SchemaFactory& bind(std::string const&, std::string const&, std::string const&);
    /**
     * @symbol
     * ?bindRequired\@SchemaFactory\@cereal\@\@QEAAAEAV12\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@00\@Z
     */
    MCAPI class cereal::SchemaFactory& bindRequired(std::string const&, std::string const&, std::string const&);
    /**
     * @symbol
     * ?deprecatedMember\@SchemaFactory\@cereal\@\@QEAAAEAV12\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCAPI class cereal::SchemaFactory& deprecatedMember(std::string, std::string);
    /**
     * @symbol
     * ?error\@SchemaFactory\@cereal\@\@QEAAAEAV12\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class cereal::SchemaFactory& error(std::string const&);
    /**
     * @symbol
     * ?error\@SchemaFactory\@cereal\@\@QEAAAEAV12\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCAPI class cereal::SchemaFactory& error(std::string const&, std::string const&);
    /**
     * @symbol ?schema\@SchemaFactory\@cereal\@\@QEBA?AUSchema\@2\@XZ
     */
    MCAPI struct cereal::Schema schema() const;
    /**
     * @symbol
     * ?lookup\@SchemaFactory\@cereal\@\@SAPEBVBasicSchema\@internal\@2\@AEBUReflectionCtx\@2\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1\@Z
     */
    MCAPI static class cereal::internal::BasicSchema const*
    lookup(struct cereal::ReflectionCtx const&, std::string const&, std::string const&);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ??0SchemaFactory\@cereal\@\@AEAA\@AEAUReflectionCtx\@1\@V?$unique_ptr\@VBasicCompositeSchema\@internal\@cereal\@\@U?$default_delete\@VBasicCompositeSchema\@internal\@cereal\@\@\@std\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@4\@2\@Z
     */
    MCAPI
    SchemaFactory(struct cereal::ReflectionCtx&, std::unique_ptr<class cereal::internal::BasicCompositeSchema>, std::string const&, std::string const&);
    // NOLINTEND
};

}; // namespace cereal
