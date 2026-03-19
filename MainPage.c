/***************************************************************************//*!
* \mainpage Start Here
*
* \section intro Introduction
*
* \subsection howto About this Guide
* Welcome to the Arxtron TestStand crash course. The aim of this guide is to
* succinctly summarize the key functionalities of TestStand as used at Arxtron;
* however, it is not intended to be exhaustive. For further support, you can ask
* a colleague, or consult the online 
* <a href="https://www.ni.com/docs/en-US/bundle/teststand/page/user-manual-welcome.html?srsltid=AfmBOoo5IbE0vL3oF35hpVwp_c9Htqf3W4D_t8ygCVxWVlcqS6sd3crI">TestStand Manual</a>.
*
* If this is your first time reading the guide, it is recommended that you
* follow it sequentially and follow along in TestStand when applicable.
*
* \subsection whyuse Why Use TestStand?
* TestStand provides a structured and scalable framework for developing,
* executing, and maintaining automated test sequences. It enables
* standardization across projects, improves code reusability, and simplifies
* debugging and reporting of test results.
*
* \section start Getting Started
* 
* \subsection open Open TestStand
* -# Press the Windows key and search for "TestStand Version Selector". Open the application.
* -# Under "Installed TestStand versions", there will be a dropdown listing the currently installed versions. 
*  If TestStand 2017 is not yet installed, talk to IT. Otherwise, select 2017.
* -# Select "Make Active", and then select "Launch 32-bit".
* -# When TestStand launches, it will prompt you for credentials. By default, the username should be "administrator" and the password should be left blank.
*
* \image html TestStandVersionSelector.png "TestStand Version Selector"
* \image latex TestStandVersionSelector.png "TestStand Version Selector"
*
* \subsection familiarize Familiarize Yourself
* Once TestStand is open, select **View > Reset UI Configuration**. This will ensure that your UI layout is the same as described in this guide.
* However, the TestStand UI is completely customizable and can be adjusted to your liking.
*
* Take a few moments to familiarize yourself with the general layout of the program.
* \image html TestStandHome.png "Default TestStand Layout" width=70%
* \image latex TestStandHome.png "Default TestStand Layout" width=70%
The interface is divided into the following panes:
* -# **Steps Pane**: this is where test steps are sequenced.
* -# **Sequences Pane**: contains a list of all sequences within the sequence file.
* -# **Insertion Palette**: contains steps that can be dragged into the steps pane.
* -# **Step Settings Pane**: when a test step is selected, this pane can be used to view and edit step settings.
* -# **Variables Pane**: all variables are listed here.
*
*******************************************************************************/

/***************************************************************************//*!
* \page terms Terminology
*******************************************************************************/

/***************************************************************************//*!
* \page config Configuration & Options
*
* TestStand contains a number of menus containing configuration settings and options.
* This section of the guide will briefly list the most important settings and
* their recommended settings where applicable.
*
* \section seqfileprop Sequence File Properties
* Can be accessed via **Edit > Sequence File Properties**. The most important setting
* within this menu is "File Format". The dropdown allows the user to choose between
* saving the file in INI, XML, or binary format.
* \image html SeqFileProperties.png "Sequence File Properties Menu" width=30%
* \image latex SeqFileProperties.png "Sequence File Properties Menu" width=30%
*
* \section usermng User Manager
* Can be accessed via **View > User Manager** or **Ctrl+U**. The user manager is used
* to add and remove users and user groups, as well as edit information such as 
* passwords and priviledges.
* \image html UserManager.png "User Manager" width=50%
* \image latex UserManager.png "User Manager" width=50%
*
* \section stationopts Station Options
* Can be accessed via **Configure > Station Options**.
*
* \subsection exe Execution
* This panel contains important settings related to test sequence execution. Enable
* Breakpoints should be enabled, as well as Allow Break While in Code Modules. This ensures
* that test sequences can be properly debugged, especially when stepping into code
* modeules. Additionally, Enable Tracing should be turned on.
* \image html Execution.png "Station Options Execution Panel" width=30%
* \image latex Execution.png "Station Options Execution Panel" width=30%
*
* \subsection model Model
* This panel contains settings related to the station model. TestStand supports three 
* station models: 
* -# **Parallel**: Runs the test sequence on multiple UUTs independently and concurrently, running
* a test as soon as a test socket is available.
* -# **Batch**: Runs the test sequence on multiple UUTs similar to parallel, but synchronizes
* execution such that tests start at the same point and wait until they reach specific
* synchronization points
* -# **Sequential**: Runs the sequence on one UUT at a time.
*
* At Arxtron, we typically use the Parallel station model, but it's good to be familiar with all three models.
* \image html Model.png "Station Options Model Panel" width=32%
* \image latex Model.png "Station Options Model Panel" width=32%
*
* \section searchdirs Search Directories
* Can be accessed via **Configure > Search Directories**. Used to configure TestStand's
* search directories. Ensure that C:\Arxtron\Libraries is added, with the "Subdirs" option
* selected; this allows TestStand to find and reference Arxtron library .dlls.
* \image html SearchDirs.png "Search Directories Menu" width=50%
* \image latex SearchDirs.png "Search Directories Menu" width=50%
*
* \section modelopts Model Options
* Can be accessed via **Configure > Model Options**. Primarily used to select the number
* of "Test Sockets", or the max number of UUTs that can be tested simultaneously.
* \image html ModelOptions.png "Model Options Menu" width=30%
* \image latex ModelOptions.png "Model Options Menu" width=30%
* 
*******************************************************************************/

/***************************************************************************//*!
* \page developing Developing a Test Sequence
* * \subpage start
* * \subpage vars
* * \subpage steps
* * \subpage types
* * \subpage flow
*******************************************************************************/

/***************************************************************************//*!
* \page running Running a Test Sequence
* * \subpage execute
* * \subpage debug
*******************************************************************************/

/***************************************************************************//*!
* \page tips Tips & Tricks
*******************************************************************************/

/***************************************************************************//*!
* \page api TestStand API
*
* <a href="https://www.ni.com/en/support/documentation/supplemental/08/programming-with-the-teststand-api.html?srsltid=AfmBOoqlfdJtqebNAnq4Q-6613BWmBbvTlgJdJIc0X8zPEaPJOGfshIn">NI Documentation</a>
*******************************************************************************/

/***************************************************************************//*!
* \page changelog Change Log
* <table>
* <tr><th>Version<th>Author<th>Date<th>Changes
* <tr><td>0.0.1
* <td>Michael Harhay
* <td>18/3/2026
* <td>Initial Release
* </table>
*******************************************************************************/
