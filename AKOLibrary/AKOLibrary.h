//
//  AKOLibrary.h
//  AKOLibrary
//
//  Created by Adrian on 4/15/11.
//  Copyright (c) 2009, 2010, 2011, Adrian Kosmaczewski & akosma software
//  All rights reserved.
//  
//  Use in source and/or binary forms without modification is permitted following the
//  instructions in the LICENSE file.
//  
//  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND 
//  ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED 
//  WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. 
//  IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, 
//  INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, 
//  BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, 
//  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF 
//  LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE 
//  OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED 
//  OF THE POSSIBILITY OF SUCH DAMAGE.
//

/**
 @file AKOLibrary.h
 Main header file of the AKOLibrary.
 Use this header file to insert the symbols of the AKOLibrary
 in your own application.
 */

#import "AKOLibrary_Foundation.h"
#import "AKOLibrary_CoreData.h"
#import "AKOLibrary_CoreText.h"
#import "AKOLibrary_QuartzCore.h"
#import "AKOLibrary_UIKit.h"
#import "AKOLibrary_Managers.h"
#import "AKOLibrary_MapKit.h"
#import "AKOLibrary_Video.h"

/**
 @mainpage AKOLibrary

 @author Adrian Kosmaczewski
 @date March 4th, 2011

 This library exposes functionality and classes used in many applications
 Developed by akosma software.

 @section main_index Index

 More information can be found in the following pages:

 @li @subpage pageBuild "Build"
 @li @subpage pageDocumentation "Documentation"
 @li @subpage pageTests "Tests"
 @li @subpage pageExtending "Extending the Library"
 @li @subpage pageUsing "Using the Library"
 */

/**
 @page pageBuild Build

 These instructions explain how to build the project in Xcode 4.
 
 @section sec_1 Install Xcode
 
 Install the iPhone developer tools for iOS 4.3. This builds successfully with 
 Xcode 4.0.2 and later. This project does not build with older versions of Xcode, 
 because the source code uses the automatic ivar generation feature of LLVM.
 
 @section sec_2 Install Doxygen
 
 Install Doxygen http://doxygen.org/ using
 Homebrew http://mxcl.github.com/homebrew/ with the command `brew install doxygen`

 Download Doxygen from the website http://doxygen.org/ and install it in 
 the "Applications" folder.
 
 @section sec_3 Build binaries and documentation
 
 Open the AKOLibrary.xcodeproj file with Xcode 4.0.2, select the
 "Universal_Framework | iOS Device" scheme, and select the "Product / Build"
 menu entry. The solution should compile without problems.
 */

/**
 @page pageDocumentation Documentation

 To generate the documentation, make sure that Doxygen 1.7.2 or later
 (http://www.stack.nl/~dimitri/doxygen/) is installed; type "doc.sh" in the root folder
 of the project.

 @section sec_1 Note about PDF output with Doxygen
 
 If you want to create a PDF output using Doxygen, you should install first 
 the MacTex distribution, freely available from
 http://www.tug.org/mactex/
 
 Download the disk image file from
 http://mirror.ctan.org/systems/mac/mactex/MacTeX.dmg
 
 Open the image file and execute the installer inside. This will install all the  
 required tools to generate PDF files from the Doxygen documentation.
 */

/**
 @page pageTests Tests
 
 The AKOLibrary is bundled with a large suite of tests. 
 
 To run the tests, select the "Universal_Framework | iOS Device" scheme, 
 and select  the "Product / Test" menu entry. This will launch the
 iPhone Simulator app, and then run the tests.
 
 To see the test results, open the console in Xcode 4.
 */

/**
 @page pageExtending Extending the Library
 
 To add more functionality in the AKOLibrary, follow these steps:
 
 @li Add a new folder with classes in the AKOLibrary group.
 @li Alternatively, you can add or create new classes in a pre-existing
 group or folder.
 @li Add any new files to the "AKOLibrary" target.
 @li Build using the "Universal_Framework" scheme and make sure everything works.
 @li Run the tests.
 @li Add a new header file for the group (if required), similar to the files
 "AKOLibrary_Video.h".
 @li Add the new header file for the group in the AKOLibrary.h file.
 @li Select the project icon, select the AKOLibrary target, and in the 
 "Build Phases" tab add the required frameworks to the project ("Link Binary 
 with Libraries"). Also, make any new header files publicly visible in the same
 pane ("Copy Headers").
 @li Select the "Product / Archive" menu.
 @li When the compilation is ready, open the "Products" group and right-click
 on the AKOLibrary.framework product. Select "Show in Finder".
 @li In the window that appears, go back a few levels in the folder hierarchy
 and select the folder "ArchiveIntermediates / Universal_Framework / 
 BuildProductsPath / Release-universal". In that folder you will find
 the freshly created AKOLibrary.framework bundle.
 */

/**
 @page pageUsing Using the Library
 
 To use the library in a project, follow these steps:
 
 @li Import the AKOLibrary.framework bundle in your app. Choose to explicitly
 copy it into the project.
 @li Select the project icon, select the main target and select the "Build
 Phases" tab. Add the following frameworks in your project: MapKit,
 MediaPlayer, AudioToolbox, CoreData, CoreGraphics, CoreText,
 Foundation, QuartzCore, SystemConfiguration, UIKit, CFNetwork. 
 @in In the "Build Settings" tab, select the "Other Linker Flags" entry and
 add the "-all_load" flag.
 @li In your source files, use the #import <AKOLibrary/AKOLibrary.h> header.
 */
