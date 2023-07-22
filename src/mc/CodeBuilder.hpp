/**
 * @file  CodeBuilder.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC namespace CodeBuilder.
 *
 */
namespace CodeBuilder {

#define AFTER_EXTRA
enum class ProtocolVersion;
enum class EncryptionCipherMode;
struct RequestHeader;
enum class RequestPurpose;
struct AgentMessage;
struct ChatMessage;
struct CommandMessage;
struct ErrorMessage;
struct EncryptionResult;
enum class ResponsePurpose;
struct EventMessage;
struct DataMessage;

#undef AFTER_EXTRA
    /**
     * @symbol  ?deserialize\@CodeBuilder\@\@YA?AUMCRESULT\@\@AEBVValue\@Json\@\@AEAURequestHeader\@1\@\@Z
     */
    MCAPI struct MCRESULT deserialize(class Json::Value const &, struct CodeBuilder::RequestHeader &);
    /**
     * @symbol  ?fromString\@CodeBuilder\@\@YA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAW4EncryptionCipherMode\@1\@\@Z
     */
    MCAPI bool fromString(std::string const &, enum class CodeBuilder::EncryptionCipherMode &);
    /**
     * @symbol  ?fromString\@CodeBuilder\@\@YA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAW4RequestPurpose\@1\@\@Z
     */
    MCAPI bool fromString(std::string const &, enum class CodeBuilder::RequestPurpose &);
    /**
     * @symbol  ?serialize\@CodeBuilder\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBUAgentMessage\@1\@\@Z
     */
    MCAPI std::string serialize(struct CodeBuilder::AgentMessage const &);
    /**
     * @symbol  ?serialize\@CodeBuilder\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBUChatMessage\@1\@\@Z
     */
    MCAPI std::string serialize(struct CodeBuilder::ChatMessage const &);
    /**
     * @symbol  ?serialize\@CodeBuilder\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBUChatMessage\@1\@AEBV23\@\@Z
     */
    MCAPI std::string serialize(struct CodeBuilder::ChatMessage const &, std::string const &);
    /**
     * @symbol  ?serialize\@CodeBuilder\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBUCommandMessage\@1\@\@Z
     */
    MCAPI std::string serialize(struct CodeBuilder::CommandMessage const &);
    /**
     * @symbol  ?serialize\@CodeBuilder\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBUDataMessage\@1\@\@Z
     */
    MCAPI std::string serialize(struct CodeBuilder::DataMessage const &);
    /**
     * @symbol  ?serialize\@CodeBuilder\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBUEncryptionResult\@1\@\@Z
     */
    MCAPI std::string serialize(struct CodeBuilder::EncryptionResult const &);
    /**
     * @symbol  ?serialize\@CodeBuilder\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBUErrorMessage\@1\@\@Z
     */
    MCAPI std::string serialize(struct CodeBuilder::ErrorMessage const &);
    /**
     * @symbol  ?serialize\@CodeBuilder\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBUEventMessage\@1\@\@Z
     */
    MCAPI std::string serialize(struct CodeBuilder::EventMessage const &);
    /**
     * @symbol  ?toString\@CodeBuilder\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4ResponsePurpose\@1\@\@Z
     */
    MCAPI std::string toString(enum class CodeBuilder::ResponsePurpose);

};