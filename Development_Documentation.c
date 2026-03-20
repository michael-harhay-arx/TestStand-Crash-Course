/***************************************************************************//*!
* \page vars Variables
* Variables in TestStand work similarly to variables in most programming languages. The following section will detail how they work.
* 
* \section vartypes Variable Types
* - **Number**: encompasses all numeric types.
* - **String**: note that there is no "char" variable type, only string.
* - **Boolean**
* - **Object Reference**: references an object (similar to a pointer).
* - **Container**: a structure that can hold members of various data types (similar to a C struct).
* - **Type**: a user-defined datatype.
* - **Array**
*
* \section varscope Variable Scopes
From smallest to largest:
* - **Step**: Only exists within the current test step.
* - **Local**: Only exists within the current sequence.
* - **Parameters**: Must be passed into the current sequence by the caller sequence.
* - **FileGlobals**: Global variables that exist everywhere within a sequence file.
* - **StationGlobals**: Variables shared across the "station" (all sequence files have access).
* - **ThisContext**: The current sequence "context".
* - **RunState**: A broad grouping encompassing the TestStand engine and Context, as well as other items.
*
* Note: **ThisContext** and **RunState** are typically only used when working with 
* the API. However, feel free to familiarize yourself with them.
*
* \image html Scopes.png "TestStand Variable Scopes" width=25%
* \image latex Scopes.png "TestStand Variable Scopes" width=25%
*
* \section workwithvars Working with Variables
* 
* \subsection Creating Variables
* To create a variable, right click under the desired scope in the Variables Pane. Then select the desired
* type from the resulting dropdown.
* \image html InsertVar.png width=30%
* \image latex InsertVar.png width=30%
*
* There is another useful way to create variables: type the desired variable name into any expression box,
* right click the variable name, and select **Create "variable name" > Desired variable type**.
* \image html CreateVar.png width=35%
* \image latex CreateVar.png width=35%
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
* \section workwithsteps Working with Test Steps
*
* \subsection createteststep Creating a Test Step
* To create a test step, simply drag and drop from the Insertion Palette into the Steps Pane.
* Alternatively, right click within the Steps Pane and select **Insert Step > Desired step type**.
*
* \subsection editteststep Editing a Test Step
* To edit a step, select it in the Steps Pane and navigate to the Step Settings Pane if it is not already open.
* Within the Step Settings Pane, there are typically (but not always) two tabs: **Properties**
* and **Step-Specific Settings**.
*
* \subsubsection stepprops Step Properties
* The **Properties** tab is a standard set of properties that appear in all TestStand step types.
* Take some time to try experimenting with these options.
* \image html stepproperties.png "Step Properties Tab" width=85%
* \image latex stepproperties.png "Step Properties Tab" width=85%
*
* There are a few key properties to note, all of which are used often at Arxtron:
* - **Post Actions**: Determines how the sequence should behave depending on the result of the current test step.
* - **Expressions**: Pre- and Post-Expressions are TestStand expressions that will run before and after the
* execution of the current step. The Status Expression determines the output status of the test (pass/fail)
* - **Preconditions**: A TestStand expression that determines whether or not the current step is run in the sequence, via a logical condition.
*
* \subsubsection stepsettings Step-Specific Settings
* \image html stepsettings.png "Step-Specific Settings Tab" width=85%
* \image latex stepsettings.png "Step-Specific Settings Tab" width=85%
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