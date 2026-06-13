# fast-unreal-templates
A collection of unreal templates with a ton of expensive render settings turned off as well as most plugins.

Instructions: Install the templates into your unreal engine installation/Templates directory (i.e. 5.9/Templates). 
This was built with binary version of unreal engine 5.8. 
You may have to do some finagling to get it to work for other engine versions. 

Note: I also have Diversion plugin included as an editor only plugin in all of the uprojects. If you open them up in your text editor of choice, you'll see this code:

{
"Name": "Diversion",
"Enabled": true,
"TargetAllowList": [
"Editor"
],
"MarketplaceURL": "com.epicgames.launcher://ue/marketplace/product/7c8abd783acd4d66a5290a12a5d67523"
},

If your project doesn't compile, consider setting "Enabled: false" in your .uproject (or removing that whole entry) and removing Plugins/Diversion from your project. Or, ask AI to resolve it like I did. I believe having those files + the marketplace URL as shown above should allow things to work, however. The problem is that the plugin hasn't officially been ported over to 5.8, so including the files and link should resolve that. Once Epic launches 5.8 for reals, I'll update all these templates.
