module.exports = {
  title: 'LiteLoaderBDS Docs',
  description: 'Documentation of LiteLoaderBDS',
  plugins: [
    '@vuepress/active-header-links',
    '@vuepress/back-to-top',
    '@vuepress/medium-zoom',
    ['vuepress-plugin-code-copy', true]
  ],
  head: [
    ['link', { rel: 'icon', href: '/assets/LL-Logo.png' }],
    ['meta', { name: 'description', content: 'LiteLoaderBDS\'s documentation' }],
    ['meta', { name: 'keywords', content: 'LiteLoaderBDS,Bedrock Dedicated Server,BDS,BDS plugin,Minecraft,LiteLoader,Bedrock' }],
  ],
  themeConfig: {
    logo: '/assets/LL-Logo.png',
    nav: [
      { text: 'Home', link: '/' },
      { text: 'Github', link: 'https://github.com/LiteLDev/LiteLoaderBDS' }
    ],
    sidebar: {
      '/en_US/Maintenance/': [
        'Analysis',
        'Coding',
        'Conclusion'
      ],
      '/en_US/Development/': [
        'Changes',
        'ScriptAPI/ScriptHelp',
        'GameAPI/Basic',
        'GameAPI/Command',
        'GameAPI/Player',
        'GameAPI/Block',
        'GameAPI/Entity',
        'GameAPI/Item',
        'GameAPI/BlockEntity',
        'GameAPI/Container',
        'GameAPI/ScoreBoard',
        'GameAPI/Device',
        'GameAPI/Server',
        'GameAPI/GameUtils',
        'EventAPI/Listen',
        'EventAPI/PlayerEvents',
        'EventAPI/EntityEvents',
        'EventAPI/BlockEvents',
        'EventAPI/OtherEvents',
        'EventAPI/EconomicEvents',
        'NbtAPI/NBT',
        'NbtAPI/NBTValue',
        'NbtAPI/NBTList',
        'NbtAPI/NBTCompound',
        'GuiAPI/Form',
        'GuiAPI/FormBuilder',
        'ScriptAPI/Logger',
        'ScriptAPI/Ll',
        'ScriptAPI/i18n',
        'DataAPI/ConfigFile',
        'DataAPI/DataBase',
        'DataAPI/Economy',
        'DataAPI/PlayerData',
        'DataAPI/OtherData',
        'SystemAPI/File',
        'SystemAPI/FileSystem',
        'SystemAPI/Network',
        'SystemAPI/SystemCall',
        'SystemAPI/SystemInfo'
      ],
      '/en_US/': 'auto',
      '/zh_CN/NET/': [
        'Deploy',
        'HowTo/PluginEntry',
        'HowTo/DynamicCommand',
        'HowTo/Static_DynamicCommand',
        'HowTo/UseEvent',
        'HowTo/BuildForm',
        'APIs/Namespace/LLNET/LLNET',
        'APIs/Namespace/LLNET.AllowList/LLNET.AllowList',
        'APIs/Namespace/LLNET.Core/LLNET.Core',
        'APIs/Namespace/LLNET.DynamicCommand/LLNET.DynamicCommand',
        'APIs/Namespace/LLNET.Event/LLNET.Event',
        'APIs/Namespace/LLNET.Form/LLNET.Form',
        'APIs/Namespace/LLNET.Hook/LLNET.Hook'
      ],
      '/zh_CN/Maintenance/': [
        'Analysis',
        'Coding',
        'Conclusion'
      ],
      '/zh_CN/Development/': [
        'Changes',
        'ScriptAPI/ScriptHelp',
        'GameAPI/Basic',
        'GameAPI/Command',
        'GameAPI/Player',
        'GameAPI/Block',
        'GameAPI/Entity',
        'GameAPI/Item',
        'GameAPI/BlockEntity',
        'GameAPI/Container',
        'GameAPI/ScoreBoard',
        'GameAPI/Device',
        'GameAPI/Server',
        'GameAPI/GameUtils',
        'EventAPI/Listen',
        'EventAPI/PlayerEvents',
        'EventAPI/EntityEvents',
        'EventAPI/BlockEvents',
        'EventAPI/OtherEvents',
        'EventAPI/EconomicEvents',
        'NbtAPI/NBT',
        'NbtAPI/NBTValue',
        'NbtAPI/NBTList',
        'NbtAPI/NBTCompound',
        'GuiAPI/Form',
        'GuiAPI/FormBuilder',
        'ScriptAPI/Logger',
        'ScriptAPI/Ll',
        'ScriptAPI/i18n',
        'DataAPI/ConfigFile',
        'DataAPI/DataBase',
        'DataAPI/Economy',
        'DataAPI/PlayerData',
        'DataAPI/OtherData',
        'SystemAPI/File',
        'SystemAPI/FileSystem',
        'SystemAPI/Network',
        'SystemAPI/SystemCall',
        'SystemAPI/SystemInfo'
      ],
      '/zh_CN/': 'auto'
    },
    'locales': {
      '/en_US/': {
        selectText: 'Languages',
        label: 'English',
        ariaLabel: 'Languages',
        editLinkText: 'Edit this page on GitHub',
        serviceWorker: {
          updatePopup: {
            message: "New content is available.",
            buttonText: "Refresh"
          }
        }
      },
      '/zh_CN/': {
        selectText: '选择语言',
        label: '简体中文',
        editLinkText: '在 GitHub 上编辑此页',
        serviceWorker: {
          updatePopup: {
            message: "发现新内容可用.",
            buttonText: "刷新"
          }
        }
      }
    }
  },
  locales: {
    // 键名是该语言所属的子路径
    // 作为特例，默认语言可以使用 '/' 作为其路径。
    '/en_US/': {
      lang: 'en-US', // 将会被设置为 <html> 的 lang 属性
      title: 'LiteLoaderBDS Docs',
      description: 'Documentation of LiteLoaderBDS',
    },
    '/zh_CN/': {
      lang: 'zh-CN',
      title: 'LiteLoaderBDS文档',
      description: 'LiteLoaderBDS的文档',
    }
  }
}