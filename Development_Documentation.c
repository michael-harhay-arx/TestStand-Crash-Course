/***************************************************************************//*!
* \page start Getting Started
* 
* \section open Open TestStand
* -# Press the Windows key and search for "TestStand Version Selector". Open the application.
* -# Under "Installed TestStand versions", there will be a dropdown listing the currently installed versions. 
*  If TestStand 2017 is not yet installed, talk to IT. Otherwise, select 2017.
* -# Select "Make Active", and then select "Launch 32-bit".
* -# When TestStand launches, it will prompt you for credentials. By default, the username should be "administrator" and the password should be left blank.
*
* \image html TestStandVersionSelector.png "TestStand Version Selector"
* \image latex TestStandVersionSelector.png "TestStand Version Selector"
*
* \section familiarize Familiarize Yourself
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
* \page vars Variables
* 
* Variables in TestStand work similarly to variables in most programming languages.
*
* 
*******************************************************************************/
/***************************************************************************//*!
* \page steps Test Steps
* 
* \section types Test Step Types
* TestStand contains many step types, which can be used to build test sequences.
* Here are a few of the most commonly used step types:
*
* \subsection action Action
* Calls a code module that does not perform a test. For example, an action step might initialize an instrument to prepare it for testing.
* \image html action_steptype.png width=6%
* \image latex action_steptype.png width=6%
*
* \subsection pf Pass/Fail
* Calls a code module that makes its own pass/fail determination. Note that this module does not appear by default in the Insertion Palette;
* to insert a pass/fail step, right click the Steps Pane and select **Insert Step > Tests > Pass/Fail Test**.
* Within this menu are a few other types of code module tests.
* \image html pf_steptype.png
* \image latex pf_steptype.png
*
* \subsection sc Sequence Call
* Calls another sequence in the current sequence file or in another sequence file.
* \image html seqcall_steptype.png width=10%
* \image latex seqcall_steptype.png width=10%
*
* \subsection statement Statement
* Executes a TestStand expression. For example, a statement step can be used to increment the value of a local variable.
* Note that statement steps do not return a pass/fail status by default; step status can
* be set in the Step Settings Pane under **Properties > Expressions > Status Expression**.
* \image html statement_steptype.png width=8%
* \image latex statement_steptype.png width=8%
*
* \subsection flow Flow Control
* Flow control step types implement standard programming branching statements.
* \image html flowctrl_steptype.png width=10%
* \image latex flowctrl_steptype.png width=10%
*
* \subsection db Database
* Database step types can be used to easily communicate with databases, which is often useful for logging functionality.
* \image html db_steptype.png width=14%
* \image latex db_steptype.png width=14%
*
*******************************************************************************/
/***************************************************************************//*!
* \page types Types 
* 
*******************************************************************************/
/***************************************************************************//*!
* \page flow TestStand Flows
* 
* \section seqflow Sequence Flow
* TestStand follows a standard procedure when executing a sequence, outlined by the following flowchart.
* \image html SequencerFlow.png "TestStand Sequence Flow" width=40%
* \image latex SequencerFlow.png "TestStand Sequence Flow" width=40%
*
* \section stepflow Step Flow
* TestStand also follows a standard procedure within each test step, as outlined below.
* \image html StepFlow.png "TestStand Step Flow" width=30%
* \image latex StepFlow.png "TestStand Step Flow" width=30%
*
*******************************************************************************/