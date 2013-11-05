ofxQRCodeGenerator
==========================
A very lightweight wrapper for the libqrencode library (http://fukuchi.org/works/qrencode/index.html.en). 
I have included a 32-bit version of libqrencode for OSX.
Andres Cartin:
I added the possibility to use padding for the resulting image, as I figured out some QR code readers have problems when they don't see a white sillhouette.
To use the ofxQRCodeGenerator on your project, you have to include libqrencode on your project's linked libraries, as well as add the following script after linking:

cp -f ../../../addons/ofxQRCodeGenerator/lib/osx/libqrencode.3.dylib "$TARGET_BUILD_DIR/$PRODUCT_NAME.app/Contents/MacOS/libqrencode.3.dylib"; install_name_tool -change /usr/local/lib/libqrencode.3.dylib @executable_path/libqrencode.3.dylib "$TARGET_BUILD_DIR/$PRODUCT_NAME.app/Contents/MacOS/$PRODUCT_NAME";
