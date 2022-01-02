#include <Global.h>
#include <GuiAPI.h>
#include <MC/Level.hpp>
#include <SendPacketAPI.h>
#include <Utils\playerMap.h>
#include <Utils\varint.h>
#include <mc/ServerPlayer.hpp>
#include <rapidjson/writer.h>
namespace GUI
{
static vector<string> onlineLIST;
static string onlineLISTV;
LIAPI std::vector<string> getPlayerList()
{
    auto plist = Level::getAllPlayers();
    std::vector<string> pl;
    for (auto p : plist)
    {
        pl.push_back(p->getRealName());
    }
    return pl;
}

using rapidjson::Value;
LIAPI unsigned int newFormID()
{
    static int fid;
    return ++fid;
}
static playerMap<std::unique_ptr<IFormBinder>> formMap;
LIAPI void _sendForm2(ServerPlayer& sp, std::unique_ptr<IFormBinder>&& form)
{
    auto payload = form->serialize();
    WBStream ws;
    ws.apply(VarUInt(form->formid), MCString(payload));
    NetworkPacket<100, false> guipk{ws.data};
    sp.sendNetworkPacket(guipk);
    formMap._map.erase(&sp);
    formMap._map.emplace(&sp, std::forward<std::unique_ptr<IFormBinder>>(form));
}
#define strval(x) Value(x.data(), (rapidjson::SizeType)x.size())
#define addmem(k, val) v.AddMember(#k, val, ac)

LIAPI void GUIButton::pack(rapidjson::Value& v, rapidjson::Document::AllocatorType& ac) const
{
    v.SetObject();
    addmem(text, strval(this->name));
    if (img.size() != 0)
    {
        Value tmp;
        tmp.SetObject();
        tmp.AddMember("type", isUrl ? Value("url", 3) : Value("path", 4), ac);
        tmp.AddMember("data", strval(img), ac);
        v.AddMember("image", std::move(tmp), ac);
    }
}

LIAPI void GUIInput::pack(rapidjson::Value& v, rapidjson::Document::AllocatorType& ac) const
{
    v.SetObject();
    addmem(type, "input");
    addmem(text, strval(text));
    addmem(placeholder, strval(ph));
    addmem(default, "");
}
LIAPI void GUILabel::pack(rapidjson::Value& v, rapidjson::Document::AllocatorType& ac) const
{
    v.SetObject();
    addmem(type, "label");
    addmem(text, strval(text));
}
LIAPI void GUIToggle::pack(rapidjson::Value& v, rapidjson::Document::AllocatorType& ac) const
{
    v.SetObject();
    addmem(type, "toggle");
    addmem(text, strval(text));
    addmem(default, this->state);
}
LIAPI void GUISlider::pack(rapidjson::Value& v, rapidjson::Document::AllocatorType& ac) const
{
    v.SetObject();
    addmem(type, "slider");
    addmem(text, strval(text));
    addmem(default, this->def);
    addmem(min, this->min);
    addmem(max, this->max);
    addmem(step, this->step);
}
LIAPI void GUISlider2::pack(rapidjson::Value& v, rapidjson::Document::AllocatorType& ac) const
{
    v.SetObject();
    addmem(type, "step_slider");
    addmem(text, strval(text));
    addmem(default, this->def);
    addmem(steps, this->steps);
}

LIAPI void GUIDropdown::pack(rapidjson::Value& v, rapidjson::Document::AllocatorType& ac) const
{
    v.SetObject();
    addmem(type, "dropdown");
    addmem(text, strval(text));
    addmem(default, this->def);
    Value tmp;
    tmp.SetArray();
    for (auto& i : this->options)
    {
        tmp.PushBack(strval(i), ac);
    }
    addmem(options, std::move(tmp));
}
LIAPI SimpleForm::SimpleForm()
{
    serialized = false;
}
LIAPI void SimpleForm::addButton(GUIButton&& wd)
{
    buttons.emplace_back(wd);
}
LIAPI string_view SimpleForm::serialize()
{
    if (serialized)
        return {json.GetString(), json.GetSize()};
    using namespace rapidjson;
    Document dc;
    dc.SetObject();
    auto& ac = dc.GetAllocator();
    dc.AddMember("type", "form", ac);
    dc.AddMember("title", strval(title), ac);
    dc.AddMember("content", strval(content), ac);
    Value btn;
    btn.SetArray();
    for (auto& i : buttons)
    {
        Value tmp;
        i.pack(tmp, ac);
        btn.PushBack(std::move(tmp), dc.GetAllocator());
    }
    dc.AddMember("buttons", std::move(btn), dc.GetAllocator());
    Writer<StringBuffer> writer(json);
    dc.Accept(writer);
    serialized = true;
    json.ShrinkToFit();
    return {json.GetString(), json.GetSize()};
}
LIAPI FullForm::FullForm()
{
    serialized = false;
}
LIAPI void FullForm::addWidget(GUI_WIDGET_T&& wd)
{
    widgets.emplace_back(wd);
}
LIAPI string_view FullForm::serialize()
{
    if (serialized)
        return {json.GetString(), json.GetSize()};
    using namespace rapidjson;
    Document dc;
    dc.SetObject();
    auto& ac = dc.GetAllocator();
    dc.AddMember("type", "custom_form", ac);
    dc.AddMember("title", strval(title), ac);
    Value v;
    v.SetArray();
    for (auto& i : widgets)
    {
        Value tmp;
        std::visit([&](auto& widget) -> void { widget.pack(tmp, ac); }, i);
        v.PushBack(std::move(tmp), ac);
    }
    dc.AddMember("content", std::move(v), ac);
    Writer<StringBuffer> writer(json);
    dc.Accept(writer);
    serialized = true;
    json.ShrinkToFit();
    return {json.GetString(), json.GetSize()};
}
}; // namespace GUI

bool GUIcallbcak(ServerPlayer* sp, unsigned fid,string str)
{
    using namespace GUI;
    auto it = formMap._map.find(sp);
    //logger.info("gui from {} {}", sp->getNameTag(), it != formMap._map.end());
    if (it != formMap._map.end())
    {
        //logger.info("gui proc {} {} need {}", sp->getNameTag(), fid, it->second->formid);
        if (it->second->formid != fid)
            return false;
        std::unique_ptr<IFormBinder> pBinder;
        pBinder.swap(it->second);
        formMap._map.erase(it);
        pBinder->invoke(*sp, str);
       // logger.info("gui done {}", sp->getNameTag());
    }
    return true;
}