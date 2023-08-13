#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/internal/BasicSchema.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class SerializerContext; }
namespace cereal { struct ReflectionCtx; }
namespace cereal { struct SchemaReader; }
namespace cereal { struct SchemaWriter; }
namespace cereal { struct SerializerTraits; }
namespace cereal::internal { class BasicSchema; }
namespace cereal::internal { struct Result; }
// clang-format on

namespace cereal::internal {

class BasicCompositeSchema : public ::cereal::internal::BasicSchema {

public:
    // prevent constructor by default
    BasicCompositeSchema& operator=(BasicCompositeSchema const&) = delete;
    BasicCompositeSchema(BasicCompositeSchema const&)            = delete;
    BasicCompositeSchema()                                       = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl 6
     * @symbol
     * ?addParent\@BasicCompositeSchema\@internal\@cereal\@\@UEAAXV?$unique_ptr\@VBasicSchema\@internal\@cereal\@\@U?$default_delete\@VBasicSchema\@internal\@cereal\@\@\@std\@\@\@std\@\@\@Z
     */
    virtual void addParent(std::unique_ptr<class cereal::internal::BasicSchema>);
    /**
     * @vftbl 7
     * @symbol
     * ?addSetter\@BasicCompositeSchema\@internal\@cereal\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0V?$unique_ptr\@VBasicSchema\@internal\@cereal\@\@U?$default_delete\@VBasicSchema\@internal\@cereal\@\@\@std\@\@\@5\@\@Z
     */
    virtual void
    addSetter(std::string const&, std::string const&, std::unique_ptr<class cereal::internal::BasicSchema>);
    /**
     * @vftbl 8
     * @symbol
     * ?addMember\@BasicCompositeSchema\@internal\@cereal\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@USerializerTraits\@3\@V?$unique_ptr\@VBasicSchema\@internal\@cereal\@\@U?$default_delete\@VBasicSchema\@internal\@cereal\@\@\@std\@\@\@5\@\@Z
     */
    virtual void
    addMember(std::string const&, struct cereal::SerializerTraits, std::unique_ptr<class cereal::internal::BasicSchema>);
    /**
     * @vftbl 9
     * @symbol
     * ?addRequiredMember\@BasicCompositeSchema\@internal\@cereal\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@USerializerTraits\@3\@V?$unique_ptr\@VBasicSchema\@internal\@cereal\@\@U?$default_delete\@VBasicSchema\@internal\@cereal\@\@\@std\@\@\@5\@\@Z
     */
    virtual void
    addRequiredMember(std::string const&, struct cereal::SerializerTraits, std::unique_ptr<class cereal::internal::BasicSchema>);
    /**
     * @vftbl 10
     * @symbol
     * ?addDeprecatedMember\@BasicCompositeSchema\@internal\@cereal\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    virtual void addDeprecatedMember(std::string const&, std::string const&);
    /**
     * @vftbl 11
     * @symbol
     * ?customError\@BasicCompositeSchema\@internal\@cereal\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    virtual void customError(std::string const&, std::string const&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CEREAL_INTERNAL_BASICCOMPOSITESCHEMA
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BasicCompositeSchema();
#endif
    /**
     * @symbol ??0BasicCompositeSchema\@internal\@cereal\@\@QEAA\@USerializerTraits\@2\@AEBUReflectionCtx\@2\@\@Z
     */
    MCAPI BasicCompositeSchema(struct cereal::SerializerTraits, struct cereal::ReflectionCtx const&);
    // NOLINTEND
};

}; // namespace cereal::internal
