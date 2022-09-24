/*
 * Tencent is pleased to support the open source community by making ScriptX available.
 * Copyright (C) 2021 THL A29 Limited, a Tencent company.  All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <ScriptX/ScriptX.h>
#include <iostream>
#include <memory>

/**
 * this demo assume we are writing a mini game engine
 * 1. export drawImage ability to draw something on screen
 * 2. allow script to sendMessage to friend
 * 3. download a game and run it's script
 *
 */
namespace demo {

// ability provided by embedder
namespace host_ability {

class HostImage {
  std::string src_;

 public:
  void setSrc(const std::string& src) {
    src_ = src;
    downloadImage(src);
  }

  const std::string& getSrc() const { return src_; }

  int getWidth() const { return 0; }
  int getHeight() const { return 0; }

  void drop() { src_ = {}; }

 private:
  void downloadImage(const std::string& src) {}
};

void drawImage(HostImage* img) {
  std::ostringstream() << "api: drawImage: " << img->getSrc() << std::endl;
}

void sendMessage(const std::string& to, const std::string& message) {
  std::ostringstream() << "api: sendMessage: [" << message << "] to: [" << to << "]" << std::endl;
}

}  // namespace host_ability

std::shared_ptr<script::ScriptEngine> createEngine();

void exportHostAbility(const std::shared_ptr<script::ScriptEngine>& engine);

std::string_view getScriptBaseLibrary();

std::string_view downloadGameScript();

void runMiniGame() {
  auto engine = createEngine();
  // 1. export function
  {
    script::EngineScope enter(engine.get());
    exportHostAbility(engine);
  }

  // 2. inject host base lib
  {
    script::EngineScope enter(engine.get());
    engine->eval(getScriptBaseLibrary());
  }

  // 3. run downloaded game script
  {
    script::EngineScope enter(engine.get());
    try {
      engine->eval(downloadGameScript());
    } catch (const script::Exception& e) {
      std::cerr << "failed to run game " << e;
    }
  }
  // exit and shutdown.
}

std::shared_ptr<script::ScriptEngine> createEngine() {
#if !defined(SCRIPTX_BACKEND_WEBASSEMBLY)
  return std::shared_ptr<script::ScriptEngine>{new script::ScriptEngineImpl(),
                                               script::ScriptEngine::Deleter()};
#else
  return std::shared_ptr<script::ScriptEngine>{script::ScriptEngineImpl::instance(), [](void*) {}};
#endif
}

void exportHostAbility(const std::shared_ptr<script::ScriptEngine>& engine) {
  using host_ability::HostImage;

  // wrapper inherits from HostImage and ScriptClass
  class HostImageWrapper : public HostImage, public script::ScriptClass {
   public:
    using script::ScriptClass::ScriptClass;
  };

  static script::ClassDefine<HostImageWrapper> hostImageDef =
      script::defineClass<HostImageWrapper>("Image")
          .constructor()
          .instanceProperty("src", &HostImage::getSrc, &HostImage::setSrc)
          .instanceProperty("width", &HostImage::getWidth, nullptr)
          .instanceProperty("height", &HostImage::getWidth, nullptr)
          .instanceFunction("drop", &HostImage::drop)
          .build();

  engine->registerNativeClass(hostImageDef);

  auto drawImageFunc =
      script::Function::newFunction([](HostImageWrapper* img) { host_ability::drawImage(img); });
  engine->set("_drawImage", drawImageFunc);

  auto sendMessageFunc = script::Function::newFunction(host_ability::sendMessage);
  engine->set("_sendMessage", sendMessageFunc);
}

std::string_view getScriptBaseLibrary() {
  using std::string_view_literals::operator""sv;
#ifdef SCRIPTX_LANG_JAVASCRIPT
  return R"(

var API = {};
API.createImage = function(src) {
  let img = new Image();
  img.src = src;
  return img;
};

API.drawImage = function(img) { _drawImage(img); };

API.sendMessage = function(to, message) { _sendMessage(to, message); };

)"sv;
#elif defined(SCRIPTX_LANG_LUA)
  return R"(

API = {};
function API.createImage(src)
  local img = Image();
  img.src = src;
  return img;
end

function API.drawImage(img) _drawImage(img); end
function API.sendMessage(to, message) _sendMessage(to, message); end

)"sv;

#else
  throw std::logic_error("add for script language");
#endif
}

std::string_view downloadGameScript() {
  using std::string_view_literals::operator""sv;

#ifdef SCRIPTX_LANG_JAVASCRIPT
  return R"(
    var img = API.createImage("https://landerlyoung.github.io/images/profile.png");
    API.drawImage(img);
    img.drop();

    API.sendMessage("jenny", "hello there!");
)";
#elif defined(SCRIPTX_LANG_LUA)
  return R"(
    local img = API.createImage("https://landerlyoung.github.io/images/profile.png");
    API.drawImage(img);
    img:drop();

    API.sendMessage("jenny", "hello there!");
)";
#else
  throw std::logic_error("add for script language");
#endif
}

}  // namespace demo

#include <gtest/gtest.h>
TEST(Demo, UseScriptEngine) { demo::runMiniGame(); }
