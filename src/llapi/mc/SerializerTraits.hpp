/**
 * @file  SerializerTraits.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure SerializerTraits.
 *
 */
struct SerializerTraits {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
public:
    /**
     * @symbol  ??0SerializerTraits\@\@QEAA\@XZ
     */
    MCAPI SerializerTraits();
    /**
     * @symbol  ??0SerializerTraits\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI SerializerTraits(struct SerializerTraits const &);
    /**
     * @symbol  ??0SerializerTraits\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI SerializerTraits(struct SerializerTraits &&);
    /**
     * @symbol  ?help\@SerializerTraits\@\@QEAAAEAU1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI struct SerializerTraits & help(std::string const &);
    /**
     * @symbol  ?name\@SerializerTraits\@\@QEAAAEAU1\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI struct SerializerTraits & name(std::string);
    /**
     * @symbol  ??4SerializerTraits\@\@QEAAAEAU0\@AEBU0\@\@Z
     */
    MCAPI struct SerializerTraits & operator=(struct SerializerTraits const &);
    /**
     * @symbol  ??4SerializerTraits\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct SerializerTraits & operator=(struct SerializerTraits &&);
    /**
     * @symbol  ?validate\@SerializerTraits\@\@QEAAAEAU1\@V?$function\@$$A6A_NAEAVmeta_any\@entt\@\@AEAVSerializerContext\@\@\@Z\@std\@\@\@Z
     */
    MCAPI struct SerializerTraits & validate(class std::function<bool (class entt::meta_any &, class SerializerContext &)>);
    /**
     * @symbol  ??1SerializerTraits\@\@QEAA\@XZ
     */
    MCAPI ~SerializerTraits();

//private:
    /**
     * @symbol  ?performValidation\@SerializerTraits\@\@AEBA_NVmeta_any\@entt\@\@AEAVSerializerContext\@\@\@Z
     */
    MCAPI bool performValidation(class entt::meta_any, class SerializerContext &) const;

};