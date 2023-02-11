/**
 * @file  AttributeInstanceHandle.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class AttributeInstanceHandle.
 *
 */
class AttributeInstanceHandle {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ATTRIBUTEINSTANCEHANDLE
public:
    class AttributeInstanceHandle& operator=(class AttributeInstanceHandle const &) = delete;
    AttributeInstanceHandle(class AttributeInstanceHandle const &) = delete;
    AttributeInstanceHandle() = delete;
#endif

public:
    /**
     * @hash   874940594
     * @symbol  ?getAttributeID\@AttributeInstanceHandle\@\@QEBA?BIXZ
     */
    MCAPI unsigned int const getAttributeID() const;
    /**
     * @hash   -464900442
     * @symbol  ?getInstance\@AttributeInstanceHandle\@\@QEBAAEBVAttributeInstance\@\@XZ
     */
    MCAPI class AttributeInstance const & getInstance() const;
    /**
     * @hash   1586189721
     * @symbol  ?getMutableInstance\@AttributeInstanceHandle\@\@QEBAPEAVAttributeInstance\@\@XZ
     */
    MCAPI class AttributeInstance * getMutableInstance() const;
    /**
     * @hash   -170021332
     * @symbol  ?inheritFrom\@AttributeInstanceHandle\@\@QEAAXAEBV1\@PEAVBaseAttributeMap\@\@\@Z
     */
    MCAPI void inheritFrom(class AttributeInstanceHandle const &, class BaseAttributeMap *);
    /**
     * @hash   -1066846450
     * @symbol  ??8AttributeInstanceHandle\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class AttributeInstanceHandle const &) const;

};