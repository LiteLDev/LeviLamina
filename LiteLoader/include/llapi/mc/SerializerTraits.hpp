/**
 * @file  SerializerTraits.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERIALIZERTRAITS
public:
    struct SerializerTraits& operator=(struct SerializerTraits const &) = delete;
#endif

public:
    /**
     * @symbol ??0SerializerTraits@@QEAA@XZ
     */
    MCAPI SerializerTraits();
    /**
     * @hash   1107268879
     * @symbol ??0SerializerTraits@@QEAA@AEBU0@@Z
     */
    MCAPI SerializerTraits(struct SerializerTraits const &);
    /**
     * @hash   -654666917
     * @symbol ??0SerializerTraits@@QEAA@$$QEAU0@@Z
     */
    MCAPI SerializerTraits(struct SerializerTraits &&);
    /**
     * @hash   119900125
     * @symbol ?name@SerializerTraits@@QEAAAEAU1@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI struct SerializerTraits & name(std::string);
    /**
     * @hash   395234050
     * @symbol ??4SerializerTraits@@QEAAAEAU0@$$QEAU0@@Z
     */
    MCAPI struct SerializerTraits & operator=(struct SerializerTraits &&);
    /**
     * @hash   2121299508
     * @symbol ?validate@SerializerTraits@@QEAAAEAU1@V?$function@$$A6A_NAEAVmeta_any@entt@@AEAVSerializerContext@@@Z@std@@@Z
     */
    MCAPI struct SerializerTraits & validate(class std::function<bool (class entt::meta_any &, class SerializerContext &)>);
    /**
     * @hash   -912686207
     * @symbol ??1SerializerTraits@@QEAA@XZ
     */
    MCAPI ~SerializerTraits();

//private:
    /**
     * @hash   -1125565409
     * @symbol ?performValidation@SerializerTraits@@AEBA_NVmeta_any@entt@@AEAVSerializerContext@@@Z
     */
    MCAPI bool performValidation(class entt::meta_any, class SerializerContext &) const;

};