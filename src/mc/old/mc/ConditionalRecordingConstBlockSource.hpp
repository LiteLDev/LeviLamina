/**
 * @file  ConditionalRecordingConstBlockSource.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ConditionalRecordingConstBlockSource.
 *
 */
class ConditionalRecordingConstBlockSource {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONDITIONALRECORDINGCONSTBLOCKSOURCE
public:
    class ConditionalRecordingConstBlockSource& operator=(class ConditionalRecordingConstBlockSource const &) = delete;
    ConditionalRecordingConstBlockSource(class ConditionalRecordingConstBlockSource const &) = delete;
    ConditionalRecordingConstBlockSource() = delete;
#endif

public:
    /**
     * @symbol  ??0ConditionalRecordingConstBlockSource\@\@QEAA\@V?$variant\@PEBVIConstBlockSource\@\@VAccessRecordingConstBlockSource\@\@\@std\@\@\@Z
     */
    MCAPI ConditionalRecordingConstBlockSource(class std::variant<class IConstBlockSource const *, class AccessRecordingConstBlockSource>);
    /**
     * @symbol  ?get\@ConditionalRecordingConstBlockSource\@\@QEAA?AV?$not_null\@PEBVIConstBlockSource\@\@\@gsl\@\@XZ
     */
    MCAPI class gsl::not_null<class IConstBlockSource const *> get();
    /**
     * @symbol  ?takeAccessedBlocks\@ConditionalRecordingConstBlockSource\@\@QEHAA?AUAccessedBlockSourceBlocks\@\@XZ
     */
    MCAPI struct AccessedBlockSourceBlocks takeAccessedBlocks();
    /**
     * @symbol  ??1ConditionalRecordingConstBlockSource\@\@QEAA\@XZ
     */
    MCAPI ~ConditionalRecordingConstBlockSource();

};