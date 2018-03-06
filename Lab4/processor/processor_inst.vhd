	component processor is
		port (
			address_external_connection_export           : out std_logic_vector(10 downto 0);                    -- export
			characterreceived_external_connection_export : in  std_logic                     := 'X';             -- export
			charactersent_external_connection_export     : in  std_logic                     := 'X';             -- export
			clk_clk                                      : in  std_logic                     := 'X';             -- clk
			datain_external_connection_export            : in  std_logic_vector(7 downto 0)  := (others => 'X'); -- export
			dataout_external_connection_export           : out std_logic_vector(7 downto 0);                     -- export
			load_external_connection_export              : out std_logic;                                        -- export
			parallelinput_external_connection_export     : in  std_logic_vector(7 downto 0)  := (others => 'X'); -- export
			paralleloutput_external_connection_export    : out std_logic_vector(7 downto 0);                     -- export
			ramcontrols_external_connection_export       : out std_logic_vector(2 downto 0);                     -- export
			reset_reset_n                                : in  std_logic                     := 'X';             -- reset_n
			transmitenable_external_connection_export    : out std_logic                                         -- export
		);
	end component processor;

	u0 : component processor
		port map (
			address_external_connection_export           => CONNECTED_TO_address_external_connection_export,           --           address_external_connection.export
			characterreceived_external_connection_export => CONNECTED_TO_characterreceived_external_connection_export, -- characterreceived_external_connection.export
			charactersent_external_connection_export     => CONNECTED_TO_charactersent_external_connection_export,     --     charactersent_external_connection.export
			clk_clk                                      => CONNECTED_TO_clk_clk,                                      --                                   clk.clk
			datain_external_connection_export            => CONNECTED_TO_datain_external_connection_export,            --            datain_external_connection.export
			dataout_external_connection_export           => CONNECTED_TO_dataout_external_connection_export,           --           dataout_external_connection.export
			load_external_connection_export              => CONNECTED_TO_load_external_connection_export,              --              load_external_connection.export
			parallelinput_external_connection_export     => CONNECTED_TO_parallelinput_external_connection_export,     --     parallelinput_external_connection.export
			paralleloutput_external_connection_export    => CONNECTED_TO_paralleloutput_external_connection_export,    --    paralleloutput_external_connection.export
			ramcontrols_external_connection_export       => CONNECTED_TO_ramcontrols_external_connection_export,       --       ramcontrols_external_connection.export
			reset_reset_n                                => CONNECTED_TO_reset_reset_n,                                --                                 reset.reset_n
			transmitenable_external_connection_export    => CONNECTED_TO_transmitenable_external_connection_export     --    transmitenable_external_connection.export
		);

