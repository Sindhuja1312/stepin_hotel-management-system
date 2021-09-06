# TEST PLAN:

##  High level test plan

| **Test ID** | **Description**                                              | **Expected Input** | **Expected Output** | **Actual Output** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01       |Check if the User selects an option from the available choices, and if want to know the features of the room then press the required choice|User's choice, as an integer  | SUCCESS| SUCCESS|Requirement based |
|  H_02       |Check if the User selects an option from the available choices to enter customer details, then select the option provide details like name, address, phone number and no. of days stay  |User's choice as an integer and alphabets  | SUCCESS| SUCCESS|Requirement based |
|  H_03       |If the user want to see the details of the customer which have entered then select the option view customer details    |User's choice as an integer and alphabets| PASS | SUCCESS|Requirement based |
|  H_04       |If the user want to check the details of the customer who haven't registered in hotel the it will display "NO DETAILS"|Display in a terminal| SUCCESS| SUCCESS|Technical |
|  H_05       |If the user want to allocate room for the registered customer, then user note the time of checking and provides selection of features like delux,AC,Non_AC,veg,non_veg for customer |User's choice | SUCCESS| SUCCESS|Requirement based |
|  H_06       |Check if the customer want to deallocate the room then enter the name and it will provide customer roomno. that is going to be vacant and date,time of leaving|User's choice as an interger| SUCCESS| SUCCESS|Requirement based  |
|  H_07       |If the customer deallocates the room, then system generates a total bill according to his room and food choices |User's choice | SUCCESS| SUCCESS|Requirement based  |
|  H_08       |Check if the system asks the user for repeating the process and exits the system when choosed |User's choice | SUCCESS| SUCCESS|Scenario based |



## Low level test plan

| **Test ID** | **Description**                                              | **Expected Input** | **Expected Output** | **Actual Output** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       |When choosing from the available options, check if the input is valid or invalid|User's Choice| Invoke the process| SUCCESS|Scenario based |
|  L_02       |Enter the details of the customer in a pattern in which user provides  |User's choice| SUCCESS| SUCCESS|Scenario based    |
|  L_03       |Check the details of the customer| User's choice as an integer| PASS| SUCCESS|Scenario based    |
|  L_04       |If the Unknown customer name is provided |User's choice as an alphabets| Invalid Message| Invalid message|Scenario based    |
|  L_05       |Allocate the room according to the features required for customer| User's choice as an integer and alphabets| SUCCESS| SUCCESS|Scenario based    |
|  L_06       |Check the billing of the customer|User's choice | SUCCESS| SUCCESS|Scenario based    |

